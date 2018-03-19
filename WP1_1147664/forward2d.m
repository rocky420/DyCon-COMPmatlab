function [sol1N,sol1Np1] = forward2d(X,Y,G,J,dt,N,M1,e01,e11);

% Resolution of elasticity system:

%  U_(tt) - mu*laplacian(U) - (lambda+mu)*grad(div(U)) = 0 indans Omega x(0,T)
%  U(x,y,0) = e0	U_(t)(x,y,0) = e1
%  U = 0   on Omega x(0,T)

% By a explicit scheme in the finited diff. clarify of order 2 in time and in space

% *********** Description of variables and constants ***********
% h: step to the discretization in space
% X,Y and G: meshing
% J: number of points on the interior
% dt: step time of the compatible scheme with the cond CFL
% N: number of steps of time made by forward.m
% lambda and mu: coefficients of Lamé
% **************************************************************

% ********************* Variables of exit  *********************
% soliN: the solution phi in time N 
% soliNp1: the solution phi in time N+1
% **************************************************************



u1 = e01;
du1 = e11;
 
%--------------------------------------------------------------
% Initialization of the buckle in time
%--------------------------------------------------------------

Y1nm1 = u1;

Y1nm1 = Y1nm1(G>0);

du1 = du1(G>0);

%****************** Calculation of u in time dt**********************

Y1n = ( M1*Y1nm1 + 2*dt*du1 )/2;

%-------------------------------------------------------------
% Buckle in time
%-------------------------------------------------------------

for np1 = 2:N+1 

  %******************** Calculation of Y1(n+1) *********************

  Y1np1 = M1*Y1n - Y1nm1;
 
  %******************** Calculation of Y2(n+1) *********************

  % Preparation of the next passage in the buckle

  Y1nm1 = Y1n; Y1n = Y1np1;

end

sol1N = Y1nm1;
sol1Np1 = Y1n;
