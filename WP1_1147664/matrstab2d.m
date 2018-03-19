function [M1,M2,M3] = matrstab2d(G,G1,J,r0,dt,coeffdamp,viscos)

% calcule les operateurs lineaires du schema aux diff finies
% resolvant le systeme de l'élasticité
% trois opérateurs sont calculés:
%   A = dxx		B = dyy	C = dxy
% M1 et M2 sont des combinaisons lineaires de A,B,C

%-------------------------------------------------------------
% Construcion des matrices du systeme lineaire
%-------------------------------------------------------------

% A = matrice de dxx
% B = matrice de dyy 
% C = matrice de dxy

% La matrice de grad(div(u)) = A*u1 + C*u2
%							   C*u1 + B*u2

%--------------------------------------------------------
% On resout le systeme   M1 Y(n+1) = M2 Y(n) + M3 Y(n-1)
%--------------------------------------------------------

[A,B] = grdiv(G);
[C] = grdiv1(G1);
C=C*dt/2*40;

M1 = speye(J^2)+coeffdamp*C-viscos*dt/2*(A+B);
M2 = 2*speye(J^2) + r0*(A+B);
M3 = coeffdamp*C-speye(J^2)-viscos*dt/2*(A+B);




