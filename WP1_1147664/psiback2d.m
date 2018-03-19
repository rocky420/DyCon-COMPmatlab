function [sol1n]=psiback2d(M1,bc1,psi1np1,psi1n)

%  Resolution of elasticity system:

% U_(tt) - mu*laplacian(U) - (lambda+mu)*grad(div(U)) = 0 in Omega x(0,T)
% U(x,y,T)=e0      U_(t)(x,y,0)=e1
% U = mu*dnU + (lambda+mu)*nu*div(U) on Boundary of Omega
% Where dn is the normal derivative in nu, the normal vector

% by a scheme in finite diff. to the order 2 at time and in space

% A single step of time is calculated

psi1nm1 = M1*psi1n - psi1np1 + bc1;
sol1n = psi1nm1;
  



