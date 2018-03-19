% Program: 'Ondas3.m'

% Wave equation in dimension 1: 
% u_tt-u_xx=0 en (a,b)
% u(a,t)=0, u(b,t)=f(t),
% u(x,0)=u0(x).
% u_t(x,0)=u1(x).

% Parameters of entry:
%    n = number of interior points in the variable x
%    l = number of courant
%    T = final time 
%    a = left wing of the interval
%    b = right wing of the interval
%    phix = solution in x=1

% Parameters of exit
%    solution in space-time

function resu=dibujo_sol(n,l,a,b,t,phix,u0,u1)
% calculate of:
% h = Distance between two consecutive points 
% x = Coordinates of the interior points
% k = step of time
% N = number of iterations T/k

h=(b-a)/(n+1);
x = a+h:h:b-h;
k = l*h;
N=length(t)-1;

e0=u0';
e1=u1';

% Matrix K: discretization of the laplacian
K = 2*speye(n); 
for i=2:n
   K(i-1,i)=-1;
   K(i,i-1)=-1;
end
K=(1/(h^2))*K;

% Vector F: second member
F=zeros(n,1);
F(n)=(1/h^2)*phix(1);

% Inicialization 
de=e0;
dep=k*e1+e0-.5*(k^2)*K*e0+k^2*F;

% Beginning of the iterations
so(2:n+1,1)=de;
so(n+2,1)=phix(1);
for iter =1:N-1
   auxi=dep;
   % Update of F
   F(n) = (1/(h^2))*phix(iter+1);
   
   dep = 2*dep-de-k^2*K*dep+k^2*F;
   dem=de;
   de=auxi;
   so(2:n+1,iter+1)=de;
   so(n+2,iter+1)=phix(iter+1);
end
so(2:n+1,N+1)=dep;
so(n+2,N+1)=0;
resu=so;
