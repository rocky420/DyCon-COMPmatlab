function [M1] = matr2d(G,J,r0)

% Calculate the linear operators of the schema in the finited diff.
% resolvant the elasticity system
% Three operators are calculated:

%   A = d_(xx)		B = d_(yy)	C = d_(xy)
% M1 and M2 are the linear combinations de A,B,C

[A,B] = grdiv(G);
M1 = 2*speye(J^2) + r0*(A+B);
disp(' --> The end of the construction of matrix');