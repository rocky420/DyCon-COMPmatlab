function sol=animstab1d(a,b,J,mu,T,coeffdamp,dampa,dampb,viscos,u0,u1,axesol)

%Commentaires:
% This program feigns the stabilization 1D of a rope of length 1.
% There is no associated sub-routine. We use a plan of order 2 at time and in space. 
% The initial data ( t=0 ) are in U01 and U11.
% There is two parametres alpha and beta:
% Alpha=0 no terms of viscosity alpha=1 terms of viscosity beta=0 not of damping beta=1 damping 

format long;
%mov = avifile('stab1dexample2.avi')
disp('|-------------------------------------------------------------------------|')
disp('|                                                                         |')
disp('|                           Stabilization 1D                              |')
disp('|                                                                         |')
disp('|-------------------------------------------------------------------------|')

%-------------------------------------------------------------------------
% PARAMETRIZE FOR THE MESHING
%-------------------------------------------------------------------------

PAUSE=0.0001;
h = 1/(J+1);
x = a:h:b;
dt=mu*h;

%-------------------------------------------------------------------------
% TIME T to which the system owes etre stabilized
%-------------------------------------------------------------------------

if viscos ~=0.
    viscos=1.;
end


N = ceil(T/dt);
temps=0:dt:T;

r0 = (dt/h)^2;

% Initial data
U01=u0';
U11=u1';
maximo=max(U01);
minimo=min(U01);
maxi=max(abs(maximo),abs(minimo));

%Calculation of matrix M1, M2, M3;
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

%Damping has the straight of the structurefor i=p1:p2
   C(i,i)=coeffdamp*dt/2;end

%Pour a damping in the medium, one would take
% for i=(J+1-p)/2:(J+1+p)/2
%    C(i,i)=40*dt/2;
% end   

%schema classical author(classic) - damping + term of viscosity

M1 = speye(J)+C-viscos*dt/2*M;
M2 = 2*speye(J) + r0*M;
M3 = C-speye(J)-viscos*dt/2*M;

Ynm1 = U01(2:J+1);
Yn = Ynm1 + dt*U11(2:J+1);
n=0;

solnm1=[0,Ynm1',0];
axes(axesol);
%hold off;
plot(x,solnm1);
axe=[a b -maxi maxi];
axis(axe);

text= ['Position at time t=', num2str((n*dt))];
title(text);
pause(PAUSE);

n=1;
soln=[0,Yn',0];
%newplot;
%hold off;
plot(x,soln);
axis(axe);

text= ['Position at time t=', num2str((n*dt))];
title(text);
pause(PAUSE);

%-------------------------------------------------------------
% Bouckle in time
%-------------------------------------------------------------
for n = 2:N 
  Ynp1 = M1\(M2*Yn + M3*Ynm1) ;
  Ynm1 = Yn; Yn = Ynp1;
  solnp1=[0,Ynp1',0];
  %newplot;
  %hold off;
  plot(x,solnp1);
  axis(axe);
  text= ['Position at time t=', num2str((n*dt))];
  title(text);
  pause(PAUSE);
  solnm1=soln;
  soln=solnp1;    
 %   F = getframe(gca);
 % 	mov = addframe(mov,F);
end

sol=1;
% mov = close(mov); 
%end