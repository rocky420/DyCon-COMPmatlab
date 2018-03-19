% Programa: 'Ondas3.m'

% Ecuacion de ondas en dimension 1: 
% u_tt-u_xx=0 en (a,b)
% u(a,t)=0, u(b,t)=f(t),
% u(x,0)=u0(x).
% u_t(x,0)=u1(x).

% Parametros de entrada:
%    n = numero de puntos interiores en la variable x
%    l = numero de courant
%    T = tiempo final 
%    a = extremo izquierdo del intervalo
%    b = extremo derecho del intervalo
%    phix = solucion en x=1

% Parametros de salida
%    solucion en espacio-tiempo

% Parametros del metodo
% beta =0
% gamma =.5 

function [resu,resu2]=ondas3(n,l,a,b,T,N,phix,E,u0,u1)

% Inicializacion de parametros
beta=0.25;
gamma=.5;
r=0.25;
orden=1;
% Matriz de masa M
M = (1-2*r)*speye(n);
for i=2:n
   M(i-1,i)=r;
   M(i,i-1)=r;
end
M=h*M;
h = (b-a)/(n+1);
k = l*h^orden;

% Calculo de:
% h = distancia entre dos puntos consecutivos 
% x = coordenadas de los puntos interiores
% k = paso de tiempo
% N = numero de iteraciones T/k

x = a+h:h:b-h;
t = 0:k:T;

% Matriz K: discretizacion laplaciano
K = 2*speye(n); 
for i=2:n
   K(i-1,i)=-1;
   K(i,i-1)=-1;
end
K=(1/h)*K;



%Corte control

%phix=reg(t,T).*phix;

%Corte control
sm=E*phix';



% Vector F: segundo miembro
F=zeros(n,1);
%F(1)=(1/h)*g1(t(1));
F(n)=sm(1);

% Inicializacion 
de=u0';
ve=u1';
ac=M\(F-K*de);

% Comienzo de las iteraciones
so(:,1)=de;
sov(:,1)=ve;
for iter =1:N
   det = de + k*ve + (.5*k^2)*(1-2*beta)*ac;
   vet = ve + (1-gamma)*k*ac;
   
   % Actualizacion de F
   %F(1) = (1/h)*g1(t(iter+1));
   F(n) = sm(1+iter);
   
   % Calculo de la nueva aceleracion
   ac = (M+(beta*k^2)*K)\(F-K*det);
   
   % Calculo de de y ve
   de = det+beta*(k^2)*ac;
   ve = vet+gamma*k*ac;
   so(:,iter+1)=de;
   sov(:,iter+1)=ve;
end
resu=M*so;
resu2=sov;