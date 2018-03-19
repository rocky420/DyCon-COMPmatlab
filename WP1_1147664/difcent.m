% Function 'difcent.m'

% Resolution of the problem of control in one dimension
% Method HUM-gradient
% Approximation of the wave equation for finite differences
% Control in the right wing

% u_tt-u_xx=0 en (a,b)
% u(t,a)=0, u(t,b)=g(t) control
% u(0,x)=u_t(0,x)=0
% u(T,x)=u0(x).
% u_t(T,x)=u1(x).

% The final information is written in the file datos.m 

% Parameters of entry:
% n = number of interior points in the variable x
% mu = number of courant
% T = final time 
% a = left wing of the interval
% b = right wing of the interval
% eps = tolerance

function [control,resid,t]=difcent(a,b,n,T,mu,eps,u0,u1)

% h = distance between two consecutive points (space)
% x = spatial coordinates of the nodes
% k = distance between two consecutive points (time)
% N = number of points in the temporary variable
% t = temporary coordinates of the nodes (time)

h = (b-a)/(n+1);
x = a+h:h:b-h;
k = mu*h;
N = floor(T/k)
T=N*k;
t = 0:k:N*k;

% Matrix 'K' for the norm
K = 2*speye(n);
for i=2:n
   K(i-1,i)=-1;
   K(i,i-1)=-1;
end
K=K/(h^2);

% Initial data
%[u0 u1]=data(x);

regu=reg(t,T);
reguh=[regu(1:N),0];
E=diag(reguh);
E=sparse(E);

%%%%%%%%%%%%%%%%%%%%%%%%%%
% Step 0: Inicialization
%%%%%%%%%%%%%%%%%%%%%%%%%%
e0=zeros(n,1);
e1=zeros(n,1);
phix=ondas1(n,mu,a,b,N,h,T,e0,e1);

[psi0 psi1]=ondas2(n,mu,a,b,N,h,T,E,phix,u0,u1);

sm=-psi1;
g0=eliptic(n,a,b,sm);
g1=psi0;

% inicializate the residue 
residuo0=sqrt((g0'*K*g0+g1'*g1)/(n));
residuo=residuo0;
resid=residuo0;

w0=g0;
w1=g1;

%%%%%%%%%%%%%%%%%%%%%
% Step 1: Decrease
%%%%%%%%%%%%%%%%%%%%%
itera=0;
ciclo=1;
while (residuo/residuo0>=eps)
itera=itera+1
phixn=ondas1(n,mu,a,b,N,h,T,w0,w1);

[psi0n psi1n]=ondas2(n,mu,a,b,N,h,T,E,phixn,u0*0,u1*0);

g0t=eliptic(n,a,b,-psi1n);
g1t=psi0n;

% calculate of rho
rhon=(g0'*K*g0+g1'*g1)/(n);
rhod=(g0t'*K*w0+g1t'*w1)/(n);
rho=rhon/rhod;

% Update
e0=e0-rho*w0;
e1=e1-rho*w1;

phix=phix-rho*phixn;
psi0=psi0-rho*psi0n;
psi1=psi1-rho*psi1n; 

g0=g0-rho*g0t;
g1=g1-rho*g1t;

% Test of convergence
   gamman=(g0'*K*g0+g1'*g1)/(n);
   gamma=gamman/rhon;
  
   w0=g0+gamma*w0;
   w1=g1+gamma*w1;
   
residuo=sqrt((g0'*K*g0+g1'*g1)/(n));
nuevoresi=residuo/residuo0
resid=[resid nuevoresi];

% To do that the program ends if there is no convergence
if nuevoresi > 1.e4
    p=error2;
    delete(p);
   'no convergence: error greater than'
   break
end
if itera > 100*ciclo
    ciclo=ciclo+1;
    [p user_response] = error1;
    delete(p);
    switch user_response
    case {'no'}
       break
    end
    'more than 100 iterations'
end
end
control=E*phix';

 
% Function 'Ondas1.m'
function resu=ondas1(n,mu,a,b,N,h,T,e0,e1)
% Wave ecuation in dimension 1 with initial data: 
% u_tt-u_xx=0 en (a,b)
% u(a,t)=u(b,t)=0,
% u(x,T)=e0(x).
% u_t(x,T)=e1(x).
% The result is the normal derivative in x=1

% Parameters of entry:
% n = number of interior points in the variable x
% mu = number of courant
% T = final time 
% a = left wing of the interval
% b = right wing of the interval
% e0= initial position 
% e1= initial speed

% Parameters of exit:
%    normal derivative in en x=1

% Calculate of:
% h = distance between two consecutive points
% x = spatial coordinates of the interior points
% k = step of time
% N = number of iterations T/k
% t = temporary coordinates of the nodes

x = a+h:h:b-h;
k = mu*h;
t = 0:k:T;
N=length(t)-1;

% Matrix K: discretization of the laplacian
K = 2*speye(n); 
for i=2:n
   K(i-1,i)=-1;
   K(i,i-1)=-1;
end
K=(1/(h^2))*K;

% Vector F: second member
F=zeros(n,1);

% Inicialization 
% de = displacement in n
% dep= displacement in n+1
de=e0;
dep=-k*e1+e0-.5*(k^2)*K*e0;
% Beginnig of the iterations
resu(N+1)=-de(n)/h;
for iter =1:N-1
   auxi=dep;
   dep = 2*dep-de-k^2*K*dep;
   de=auxi;
   resu(N-iter+1)=-de(n)/h;
end
resu(1)=0;


% Program: 'Ondas2.m'
function [resu0,resu1]=ondas2(n,mu,a,b,N,h,T,E,phix,u0,u1)
% Not homogeneous waves equation in dimension 1: 
% u_tt-u_xx=0 en (a,b)
% u(a,t)=0, u(b,t)=f(t),
% u(x,0)=u0(x).
% u_t(x,0)=u1(x).
% The result is the solution in t=T

% Parameters of entry:
% n = number of interior points in the variable x
% mu = number of courant
% T= final time 
% a = left wing of the interval
% b = right wing of the interval
% phix = value of the solution in x=b

% Parameters of exit:
%    position in t=T
%    speed in t=T

% Parameters of Newmark's method:
%    beta =0.
%    gamma =.5 

% Calculate of:
% h = distance between two consecutive points
% x = spatial coordinates of the interior points
% k = step of time
% N = number of iterations T/k


x = a+h:h:b-h;
k = mu*h;

t=0:k:T;
N=length(t)-1;
%phix=reg(t,T).*phix;

e0=u0';
e1=u1';

% Matrix K: discretization of the laplacian
K = 2*speye(n); 
for i=2:n
   K(i-1,i)=-1;
   K(i,i-1)=-1;
end
K=(1/(h^2))*K;

phix=E*phix';
% Vector F: second member
F=zeros(n,1);
F(n) = (1/(h^2))*phix(1);

% Inicialization 
% de = displacement in n
% dep= displacement in n+1
de=e0;
dep=k*e1+e0-.5*(k^2)*K*e0+k^2*F;

% Beginning of iterations

for iter =1:N
   auxi=dep;
   % Update of F
   F(n) = (1/(h^2))*phix(iter+1);
   
   dep = 2*dep-de-k^2*K*dep+k^2*F;
   dem=de;
   de=auxi;   
end

resu0=de;
resu1=(dep-dem)/(2*k);

% Program: 'Poisson.m'
function resu0=eliptic(n,a,b,f)
% Poisson ecuation in dimension 1:
% -u''(x)=f(x) en (a,b)
% u(a)=0, u(b)=0.
% The functions f(x) and c(x) are defined in the files f.m and c.m
% The results are written in the file 'resultados.dat'

% Parameters of entry:
% n = number of interior points
% a = left wing of the interval
% b = right wing of the interval
% f = the second member

% Parameters of exit
% Solution of the elliptical problem

% calculate of:
% h = distance between two consecutive points 
% x = coordinates of the interior points

h = (b-a)/(n+1);
x = a+h:h:b-h;

% Matrix 'mat' and second member 'sm'
mat = 2*speye(n);
for i=2:n
   mat(i-1,i)=-1;
   mat(i,i-1)=-1;
end
sm = f*h^2;

% Solution 'sol'
resu0 = mat\sm;

function resu=reg(t,T)
resu(1)=0;
p=length(t);
resu(p)=0;
for i=2:p-1
  resu(i)= exp(1./((t(i)-T/2).^2-(T/2)^2));
end
