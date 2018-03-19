function [M1,M2] = matrsc_mix2d(G,J,r0)
[A,B] = grdiv(G);
M=grdivM(G);
K=grdivK(G);
alpha=1/4;
M2=(A+B)*inv(K)*M-alpha*r0*(A+B);
M1 = 2*M2 + r0*(A+B);
M1=M2\M1;
M2=inv(M2);