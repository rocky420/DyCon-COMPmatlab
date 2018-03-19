function [bc1] = bdycondA(c1,r0,J,A)

cb1 = zeros(J,1);
cb1(1) = A*r0*c1(1);
cb1(J) = r0*c1(J+2);
bc1 = cb1;


