function [ener,temps]=stab2dcalcul(a,b,J,mu,T,coeffdamp,dampband,viscos,U01,U11)

%Commentaires:
% % This program feigns the stabilization 1D of a rope of length 1.
% There is no associated sub-routine. We use a plan of order 2 at time and in space. 
% The initial data ( t=0 ) are in U01 and U11.
% There is two parametres alpha and beta:
% Alpha=0 no terms of viscosity alpha=1 terms of viscosity 
%  beta=0 not of damping beta=1 damping 

format long;

disp('|-------------------------------------------------------------------------|')
disp('|                                                                         |')
disp('|                           Stabilization 2D                              |')
disp('|                                                                         |')
disp('|-------------------------------------------------------------------------|')

%-------------------------------------------------------------------------
% PARAMETRIZE FOR THE MESHING
%-------------------------------------------------------------------------

h = 1/(J+1);
x = a:h:b;
y=x;

[X,Y] = meshgrid(x,y);
Y=flipud(Y);
G = numgrid('S',J+2);
G1=G;
p=ceil((J-1)*dampband);
G1(p+2:J+1,1:J+1-p)=0;

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

[M1,M2,M3] = matrstab2d(G,G1,J,r0,dt,coeffdamp,viscos);

u1 = U01;
du1 = U11;
%--------------------------------------------------------------
% Initialization of the buckle in time
%--------------------------------------------------------------
Y1nm1 = u1;
Y1nm1 = Y1nm1(G>0);
du1 = du1(G>0);

%****************** Calculation of u in time dt**********************
%Y1n = ( M2*Y1nm1 - 2*dt*M3*du1 )/2;
Y1n = Y1nm1 + dt*du1;

% We use here the fact M3-M1 = 2Id whom there is viscous and damping 
% or not.
n=0;
totnm1=G;
totnm1(G>0)=full(Y1nm1(G(G>0)));

n=1;
totn=G;
totn(G>0)=full(Y1n(G(G>0)));

ener=zeros(1,N);

%-------------------------------------------------------------
% Buckle in time
%-------------------------------------------------------------
for n = 2:N 

  %******************** Calculation of Y1(n+1) *********************
  Y1np1 = M1\(M2*Y1n + M3*Y1nm1) ;
  
  % Preparation of the next passage in the buckle
  Y1nm1 = Y1n; Y1n = Y1np1;
  totnp1=G;
  totnp1(G>0)=full(Y1np1(G(G>0)));
  
  %calcul of the energie of the systeme has the moment n-1
  %partial space
  [dxf,dyf] = gradient(totn,x,y);
  zx = normel22d(dxf,J,h)^2+normel22d(dyf,J,h)^2;
  % partial time
  zt=normel22d((totnp1-totnm1)/2/dt,J,h)^2;    
  ener(n-1)=0.5*(zx+zt);
  totnm1=totn;
  totn=totnp1;    
end

%end
