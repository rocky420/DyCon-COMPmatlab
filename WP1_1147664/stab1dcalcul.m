function [ener,temps]=stab1dcalcul(a,b,J,mu,T,coeffdamp,dampa,dampb,viscos,u0,u1)

%Commentaires:
% % This program feigns the stabilization 1D of a rope of length 1.
% There is no associated sub-routine. We use a plan of order 2 at time and in space. 
% The initial data ( t=0 ) are in U01 and U11.
% There is two parametres alpha and beta:
% Alpha=0 no terms of viscosity alpha=1 terms of viscosity 
% beta=0 not of damping beta=1 damping 
format long;

disp('|-------------------------------------------------------------------------|')
disp('|                                                                         |')
disp('|                           Stabilization 1D                              |')
disp('|                                                                         |')
disp('|-------------------------------------------------------------------------|')

%-------------------------------------------------------------------------
% PARAMETRIZE FOR THE MESHING
%-------------------------------------------------------------------------

h = 1/(J+1);
x = a:h:b;
dt=mu*h;

if viscos ~=0.
    viscos=1.;
end

%-------------------------------------------------------------------------
% TIME T to which the system owes etre stabilized
%-------------------------------------------------------------------------

N = ceil(T/dt);
temps=0:dt:T;

r0 = (dt/h)^2;

% Initial data
U01=u0';
U11=u1';

temps1=cputime;

%Calcul of the matrix M1, M2, M3;
for i=1:J-1
   M(i,i)=-2;
   M(i,i+1)=1;
   M(i+1,i)=1;
end
M(i+1,i+1)=-2;
M=sparse(M);

% The integer p is bound to the investment of the damping 
% C is the matrix bound to the damping 
% For example, if the matrix C is the identity, then 
% the damping acts everywhere.
p1=max(floor(dampa*J),1);
p2=min(ceil(dampb*J),J);
C=sparse(zeros(J));

%Damping has the straight of the structure for i=p1:p2
   C(i,i)=coeffdamp*dt/2;end

%Pour a damping in the middle, we would take
% for i=(J+1-p)/2:(J+1+p)/2
%    C(i,i)=40*dt/2;
% end   

%schema classical - damping + term of viscosity

M1 = speye(J)+C-viscos*dt/2*M;
M2 = 2*speye(J) + r0*M;
M3 = C-speye(J)-viscos*dt/2*M;

%--------------------------------------------------------------
% Initialization of the buckle in time
%--------------------------------------------------------------

Ynm1 = U01(2:J+1);

%****************** Calculation of u in temps dt**********************
Yn = Ynm1 + dt*U11(2:J+1);
%Yn = ( M2*Ynm1 - 2*dt*M3*U11(2:J+1) )/2;
% We use one initiation of order 1 at time which gives 
% of better resultat than the initiation of order 2 at time.

% We use here the fact M3-M1 = 2Id whom there is viscous and damping 
% or not.
%PAUSE=0.05;
n=0;

solnm1=[0,Ynm1',0];
n=1;
soln=[0,Yn',0];

ener=zeros(1,N);

%-------------------------------------------------------------
% Buckle in time
%-------------------------------------------------------------
for n = 2:N 

  %******************** Calculation of Y1(n+1) *********************
  Ynp1 = M1\(M2*Yn + M3*Ynm1) ;
  
  % Preparation of the next passage in the buckle
  Ynm1 = Yn; Yn = Ynp1;
  solnp1=[0,Ynp1',0];
  
  %calcul of the energie of the systeme has the moment n-1
    
  [df] = gradient(soln,x);
  zx = normel2(df,J,h)^2;
  zt=normel2((solnp1-solnm1)/2/dt,J,h)^2;   
  ener(n-1)=0.5*(zx+zt);
  solnm1=soln;
  soln=solnp1;    end
temps2=cputime-temps1

%end
