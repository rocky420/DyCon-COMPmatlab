function [c1] = controleA(phi1n,h,J,A)

psi1n = zeros(J+2,1);
psi1n(1)  = -A*phi1n(1)/h;
psi1n(J+2)= -phi1n(J)/h; 
c1 = psi1n;




