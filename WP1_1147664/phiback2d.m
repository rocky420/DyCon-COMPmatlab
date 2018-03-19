function [sol1n]=phiback2d(n,dt,J,...
				G,M1,phi1np1,phi1n)

% Resolution of the retrograde system of elasticity:

% U_(tt) - mu*laplacian(U) - (lambda+mu)*grad(div(U)) = 0  in Omega x(0,T)
% U(x,y,T)=e0  U_(t)(x,y,0)=e1
% U = 0  on Boundary of Omega

% by a scheme in finite diff. to the order 2 at time and in space

% A single step of time is calculated: phi in time n*dt

phi1nm1 = M1*phi1n - phi1np1;
sol1n = phi1nm1;

  



