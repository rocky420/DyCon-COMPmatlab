% Programa 'control.m'

% Resolución del problema de control en una dimension
% Metodo HUM-Gradiente conjugado

% Control en 1 extremo
% u_tt-u_xx=0 en (a,b)
% u(a,t)=0, u(b,t)=g(t) control
% u(x,0)=u0(x).
% u_t(x,0)=u1(x).

% los datos iniciales se escriben en los ficheros u0.m y u1.m 

% Parametros de entrada:
% n = numero de puntos interiores en la variable x
% mu = numero de courant
% T = tiempo final 
% a = extremo izquierdo del intervalo
% b = extremo derecho del intervalo
% eps= tolerancia

function [control,resid,t]=efm(a,b,n,T,mu,eps,u0,u1)
orden= 1; % 2;% 4/3; % Arnaud

% h = distancia entre dos puntos consecutivos (espacio)
% x = coordenadas espaciales de los nodos
% k = distancia entre dos puntos consecutivos (tiempo)
% N = numero de puntos en la variable temporal
% t = coordenadas temporales de los nodos (tiempo)

%l=0.2;

h = (b-a)/(n+1);
x = a+h:h:b-h;
k = mu*h^orden;
N = floor(T/k);
T = N*k;
t = 0:k:T;
r=0.25;
beta=0.25;
gama=.5;
%r=(1/4)*(1-(3*pi*h/4)^(2/3)); % Arnaud

% Matriz de masa Ma
Ma = (1-2*r)*speye(n);
for i=2:n
   Ma(i-1,i)=r;
   Ma(i,i-1)=r;
end
Ma=h*Ma;

% Matriz de rigidez K: discretizacion laplaciano
K = 2*speye(n); 
for i=2:n
   K(i-1,i)=-1;
   K(i,i-1)=-1;
end
K=(1/h)*K;

% Datos iniciales
%[u0 u1]=datos(x);

% Calculo de la matriz E que calcula -h^2*f''+f/h^2
% y permite calcular el segundo miembro del sistema
% para un control f dado

regu=reg(t,T);
reguh=[regu(1:N),0];
E=2*diag(reguh);
E=sparse(E);
for i=2:N
   E(i-1,i)=-reguh(i);
   E(i,i-1)=-reguh(i);
end
RR=sparse(diag(reguh));
%E=(r/k^2)*E+(1/h^2)*RR;%speye(N+2);
E=(r*h/k^2)*E+(1/h)*RR;%speye(N+1);

%%%%%%%%%%%%%%%%%%%%%%%%%%
% Paso 0: Inicializacion
%%%%%%%%%%%%%%%%%%%%%%%%%%

e0=zeros(n,1);
e1=zeros(n,1);
phix=zeros(1,N+1);

for i=2:n+1 %cortamos el dato inicial en los extremos
    sm0(i-1)=u1(i);
    g10(i-1)=-u0(i);
end;
sm=sm0';
g0=eliptic(K,h,sm);
g1=Ma\((g10')*h);

residuo0=sqrt(g0'*(K*g0)+g1'*(Ma*g1));
residuo=residuo0;

w0=g0;
w1=g1;

grafica=1;

%%%%%%%%%%%%%%%%%%%%%
% Paso 1: Descenso
%%%%%%%%%%%%%%%%%%%%%
itera=0;
while (residuo>=eps)
itera=itera+1
phixn=ondas1(n,mu,a,b,T,h,k,N,w0,w1,Ma,K,orden,gama,beta);

[psi0n psi1n]=ondas2(n,mu,a,b,T,h,k,N,phixn,Ma,K,r,orden,E,gama,beta);

g0t=eliptic(K,h,-psi1n);
g1t=Ma\(psi0n*h);

% descenso
rhon=g0'*(K*g0)+g1'*(Ma*g1);
rhod=w0'*(K*g0t)+w1'*(Ma*g1t);
rho=rhon/rhod;

% Actualizacion 
e0=e0-rho*w0;
e1=e1-rho*w1;
phix=phix-rho*phixn;

g0=g0-rho*g0t;
g1=g1-rho*g1t;

% Test de convergencia
residuo=sqrt((g0'*(K*g0)+g1'*(Ma*g1))/residuo0)
grafica=[grafica residuo];

% Nuevo descenso
   gamman=g0'*(K*g0)+g1'*(Ma*g1);
   gamma=gamman/rhon;
        
   w0=g0+gamma*w0;
   w1=g1+gamma*w1; 
   
end 

'convergencia'

% calculo del control
Kt = 2*speye(N+1); 
for i=2:N+1
   Kt(i-1,i)=-1;
   Kt(i,i-1)=-1;
end
Kt(1,1)=1;
Kt(N+1,N+1)=1;
Kt=(1/(k^2))*Kt;
Mat=((h^2)/4)*Kt+speye(N+1);
control=Mat\(h*E*phix');

resid=grafica;
% calculo del control
%plot(t,cont);
%plot(t,h*(E*phix'));

% Dibujo de las soluciones  aproximada
%figure(5)
%surf(t,x,so)
%rotate3d;
%figure(6)
%surf(t,x,sov)
%rotate3d;

% Programa: 'Ondas1.m'

function resu=ondas1(n,mu,a,b,T,h,k,N,e0,e1,M,K,orden,gamma,beta)

% Ecuacion de ondas en dimension 1: 
% u_tt-u_xx=0 en (a,b)
% u(a,t)=u(b,t)=0,
% u(x,0)=u0(x).
% u_t(x,0)=u1(x).
% El resultado es la derivada normal en x=1

% Parametros de entrada:
%    n = numero de puntos interiores en la variable x
%    mu = numero de courant
%    T = tiempo final 
%    a = extremo izquierdo del intervalo
%    b = extremo derecho del intervalo
%    e0= posicion inicial
%    e1= velocidad inicial

% Parametros de salida:
%    derivada normal en x=1

% Inicializacion de parametros
%beta=0;
%gamma=.5;

% Calculo de:
% h = distancia entre dos puntos consecutivos 
% x = coordenadas de los puntos interiores
% k = paso de tiempo
% N = numero de iteraciones T/k
% t = coordenadas temporales de los nodos
x = a+h:h:b-h;
t = 0:k:T;

% Vector F: segundo miembro

F=zeros(n,1);

% Inicializacion 
de=e0;
ve=-e1;
ac=M\(F-K*de);
% Comienzo de las iteraciones
resu(N+1)=-de(n)/h;
for iter =1:N-1
   det = de + k*ve + (.5*k^2)*(1-2*beta)*ac;
   vet = ve + (1-gamma)*k*ac;
     
   % Calculo de la nueva aceleracion
   ac = (M+(beta*k^2)*K)\(F-K*det);
   
   % Calculo de de y ve
   de = det+beta*(k^2)*ac;
   ve = vet+gamma*k*ac;
   resu(N-iter+1)=-de(n)/h;
 end
resu(1)=0;

% Programa: 'Ondas2.m'

function [resu0,resu1]=ondas2(n,mu,a,b,T,h,k,N,phix,M,K,r,orden,E,gamma,beta)

% Ecuacion de ondas no homogenea en dimension 1: 
% u_tt-u_xx=0 en (a,b)
% u(a,t)=0, u(b,t)=f(t),
% u(x,0)=u0(x).
% u_t(x,0)=u1(x).
% El resultado es la solucion en t=T

% Parametros de entrada:
%    n = numero de puntos interiores en la variable x
%    mu = numero de courant
%    T = tiempo final 
%    a = extremo izquierdo del intervalo
%    b = extremo derecho del intervalo
%    phix = valor de la solucion en x=b

% Parametros de salida:
%    posicion en t=T
%    velocidad en t=T

% Inicializacion de parametros
%beta=0;
%gamma=.5;

% Calculo de:
% h = distancia entre dos puntos consecutivos 
% x = coordenadas de los puntos interiores
% k = paso de tiempo
% N = numero de iteraciones T/k
x = a+h:h:b-h;
t = 0:k:T;

% Vector F: segundo miembro

F=zeros(n,1);

%Corte control

sm=E*phix';

F(n)=sm(1);

% Inicializacion 
de=zeros(n,1);
ve=zeros(n,1);
ac=M\(F-K*de);

% Comienzo de las iteraciones
for iter =1:N
   det = de + k*ve + (.5*k^2)*(1-2*beta)*ac;
   vet = ve + (1-gamma)*k*ac;
   
   % Actualizacion de F
   F(n) = sm(1+iter);
   
   % Calculo de la nueva aceleracion
   ac = (M+(beta*k^2)*K)\(F-K*det);
   
   % Calculo de de y ve
   de = det+beta*(k^2)*ac;
   ve = vet+gamma*k*ac;
end
      
resu0=de;
resu1=ve;

% Programa: 'Poisson.m'

function resu0=eliptic(K,h,f)

% Ecuacion de Poisson en dimension 1 discretizada:
% K*x=M*f

% Parametros de entrada:
%    K, M y f 

% Parametros de salida
%    solucion del sistema

sm = h*f;
% Solucion 'sol'
resu0 = K\sm;

function resu=reg(t,T)

resu(1)=0;
k=length(t);
resu(k)=0;
for i=2:k-1
  resu(i)= exp(1./((t(i)-T/2).^2-(T/2)^2));
end
