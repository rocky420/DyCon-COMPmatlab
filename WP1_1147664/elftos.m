% Function 'elftos.m'

% Resolution of the problem of control in one dimension
% Method HUM-gradient
% Approximation of the wave equation for finite differences
% Control in the right wing
% u_tt-u_xx=0 en (a,b)
% u(a,t)=0, u(b,t)=g(t) control
% u(x,0)=u0(x).
% u_t(x,0)=u1(x).

% Parameters of entry:
% n = number of interior points in the variable x
% mu = number of courant
% T = final time 
% a = left wing of the interval
% b = right wing of the interval
% eps = tolerance
% u0= final position
% u1= final speed
% Nbeta, Ngamma = parameters of Newmark's methods of the solution 
% of the wave ecuation

function [control,resid,t]=elftos(a,b,n,T,mu,eps,Nbeta,Ngamma,r,u0,u1)

% h = distance between two consecutive points (space)
% x = spatial coordinates of the nodes
% k = distance between two consecutive points (time)
% N = number of points in the temporary variable
% t = temporary coordinates of the nodes (time)

h = (b-a)/(n+1);
x = a+h:h:b-h;
k = mu*h;
N = floor(T/k);
T=N*k;
t = 0:k:T;

% Matrix of mass M
% r=0    => lumped mass
% r=1/6  => consistent mass
% r=1/12 => higher-order mass

M = (1-2*r)*speye(n);
for i=2:n
   M(i-1,i)=r;
   M(i,i-1)=r;
end
M=h*M;

% Matrix de rigidity K: discretization of the laplacian
K = 2*speye(n); 
for i=2:n
   K(i-1,i)=-1;
   K(i,i-1)=-1;
end
K=(1/h)*K;

% calculate of the matrix that calculates -r*h^2*f''+f/h^2
% And the second member of the system allows to calculate
% for a control f given

regu=reg(t,T);
reguh=[regu(1:N),0];
E=2*diag(reguh);
E=sparse(E);
for i=2:N
   E(i-1,i)=-reguh(i);
   E(i,i-1)=-reguh(i);
end
RR=sparse(diag(reguh));
E=(r*h/k^2)*E+(1/h)*RR;

%%%%%%%%%%%%%%%%%%%%%%%%%%
% Step 0: Inicialitacion
%%%%%%%%%%%%%%%%%%%%%%%%%%

e0=zeros(n,1);
e1=zeros(n,1);
phix=zeros(1,N+1);

[psi0 psi1]=ondas2(n,mu,a,b,T,h,k,N,phix,M,K,E,r,Nbeta,Ngamma,u0,u1);

sm=-psi1;
g0=eliptic(K,h,sm);
g1=M\psi0*h;

residuo0=sqrt(g0'*(K*g0)+g1'*(M*g1));
residuo=residuo0;
resid=residuo;

w0=g0;
w1=g1;

%%%%%%%%%%%%%%%%%%%%%
% Step 1: Decrease
%%%%%%%%%%%%%%%%%%%%%
itera=0;
ciclo=1;

while (residuo>=eps)
itera=itera+1
phixn=ondas1(n,mu,a,b,T,h,k,N,w0,w1,M,K,Nbeta,Ngamma);

[psi0n psi1n]=ondas2(n,mu,a,b,T,h,k,N,phixn,M,K,E,r,Nbeta,Ngamma,u0*0,u1*0);

g0t=eliptic(K,h,-psi1n);
g1t=M\psi0n*h;

% decrease
rhon=g0'*(K*g0)+g1'*(M*g1);
rhod=w0'*(K*g0t)+w1'*(M*g1t);
rho=rhon/rhod;

% Update 
e0=e0-rho*w0;
e1=e1-rho*w1;
phix=phix-rho*phixn;

g0=g0-rho*g0t;
g1=g1-rho*g1t;

% Test of convergence
residuo=sqrt((g0'*(K*g0)+g1'*(M*g1))/residuo0)

resid=[resid residuo];
% new decrease
   gamman=g0'*(K*g0)+g1'*(M*g1);
   gamma=gamman/rhon;
        
   w0=g0+gamma*w0;
   w1=g1+gamma*w1; 
    
% To do that the program ends if there is no convergence
if residuo > 1.e4
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
% calculate of control
Kt = 2*speye(N+1); 
for i=2:N+1
   Kt(i-1,i)=-1;
   Kt(i,i-1)=-1;
end
Kt(1,1)=1;
Kt(N+1,N+1)=1;
Kt=(1/(k^2))*Kt;
Mat=((h^2)*r)*Kt+speye(N+1);
control=Mat\(h*E*phix');

'convergence'

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Function: 'Ondas1.m'
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

function resu=ondas1(n,mu,a,b,T,h,k,N,e0,e1,M,K,beta,gamma)

% Wave ecuation in dimension 1: 
% u_tt-u_xx=0 en (a,b)
% u(a,t)=u(b,t)=0,
% u(x,0)=u0(x).
% u_t(x,0)=u1(x).
% The result is the normal derivative in x=1

% Parameters of entry:
% n = number of interior points in the variable x
% mu = number of courant
% T = final time 
% a = left wing of the interval
% b = right wing of the interval
% e0= initial position 
% e1= initial speed
% M = matrix of mass
% K = matrix of rigidity
% beta,gamma = parameters of Newmark

% Parameters of exit:
%    resu = normal derivative in x=1

% Vector F: second member

F=zeros(n,1);

% Inicializacion 
de=e0;
ve=-e1;
ac=M\(F-K*de);
% Beginning of the iterations
resu(N+1)=-de(n)/h;
for iter =1:N-1
   det = de + k*ve + (.5*k^2)*(1-2*beta)*ac;
   vet = ve + (1-gamma)*k*ac;
     
   % Calculate of the new acceleration
   ac = (M+(beta*k^2)*K)\(F-K*det);
   
   % Calculate of de and ve
   de = det+beta*(k^2)*ac;
   ve = vet+gamma*k*ac;
   resu(N-iter+1)=-de(n)/h;
end
resu(1)=0;

%%%%%%%%%%%%%%%%%%%%%%%55
% Function: 'Ondas2.m'
%%%%%%%%%%%%%%%%%%%%%%%%%5

function [resu0,resu1]=ondas2(n,mu,a,b,T,h,k,N,phix,M,K,E,r,beta,gamma,u0,u1)

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
%    M = matrix of mass
%    r = parameter that depends on the matrix of chosen mass
%                r=0    => lumped mass
%                r=1/6  => consistent mass
%                r=1/12 => higher-order mass
%    K = matrix of rigidity
%    beta,gamma = parameters of Newmark
%    E = matrix that allows to cut the control in the ends

% Parameters of exit:
%    position in t=T
%    speed in t=T

% Vector F: second member

F=zeros(n,1);

sm=E*phix';

F(n)=sm(1);

% Inicialization 
de=u0';
ve=u1';
ac=M\(F-K*de);

% Beginning of the iterations
for iter =1:N
   det = de + k*ve + (.5*k^2)*(1-2*beta)*ac;
   vet = ve + (1-gamma)*k*ac;
   
   % Update of F
   F(n) = sm(1+iter);
   
   % Calculate of the new acceleration
   ac = (M+(beta*k^2)*K)\(F-K*det);
   
   % Calculate of de and ve
   de = det+beta*(k^2)*ac;
   ve = vet+gamma*k*ac;
end

resu0=de;
resu1=ve;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Function: 'eliptic'
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

function resu=eliptic(K,h,f)

% Poisson's equation solves in dimension 1:
% K*x=f

% Parameters of entry:
%    K = discretization of the laplacian
%    h = parameter of discretization 
%    f = second member

% Parameters of exit
%    resu= solutionf of the sistem

sm = h*f;
% Solution 'sol'
resu = K\sm;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Function 'reg'
%%%%%%%%%%%%%%%%%%%%%%%%%%

function resu=reg(t,T)

% Function of compact support in time [0,T] 

% Parameters of entry:
% T final time
% t Coordinates of the discretizacion in time

resu(1)=0;
p=length(t);
resu(p)=0;
for i=2:p-1
  resu(i)= exp(1./((t(i)-T/2).^2-(T/2)^2));
end
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%