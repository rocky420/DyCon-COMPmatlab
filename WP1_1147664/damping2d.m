function sol=damping2d(a,b,J,dampband,axesol)


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

h = 1/(J+1);
x = a:h:b;
y=x;

[X,Y] = meshgrid(x,y);
Y=flipud(Y);
G = numgrid('S',J+2);
G1=G;
p=ceil((J-1)*dampband);
G1(p+2:J+1,1:J+1-p)=0;
axes(axesol);
spy(G1);

sol=1;
%end
