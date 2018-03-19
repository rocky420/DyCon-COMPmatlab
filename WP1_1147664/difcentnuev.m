% Funcion 'difcent.m'

% Resolución del problema de control en una dimension
% Metodo HUM-Gradiente conjugado
% Aproximacion de la ecuacion de ondas por diferencias finitas
% Control en el extremo derecho

% u_tt-u_xx=0 en (a,b)
% u(t,a)=0, u(t,b)=g(t) control
% u(0,x)=u_t(0,x)=0
% u(T,x)=u0(x).
% u_t(T,x)=u1(x).

% los datos finales se escriben en el fichero datos.m 

% Parametros de entrada:
% n = numero de puntos interiores en la variable x
% mu = numero de courant
% T = tiempo final 
% a = extremo izquierdo del intervalo
% b = extremo derecho del intervalo
% eps= tolerancia

function [control,resid,t]=difcent(a,b,n,T,mu,eps,u0,u1)

% h = distancia entre dos puntos consecutivos (espacio)
% x = coordenadas espaciales de los nodos
% k = distancia entre dos puntos consecutivos (tiempo)
% N = numero de puntos en la variable temporal
% t = coordenadas temporales de los nodos (tiempo)

n = 40;%20;
mu = 0.9%1;
a = 0;
b = 1;
T = 2.4;
eps=1.e-4%-2;

% Ejemplo 1
u0=sin(pi*x);
u1=-pi*sin(pi*x);

% Ejemplo 2: 100 modos de Fourier
%u0=0;
%for i=1:1000
%  resu= resu+sin(i*pi*x);
%end
%u0=resu/100; 

% Ejemplo 3: funcion sombrero
%resu=x*0;
%for i=1:length(x)/2
%   resu(i)=3*x(i);
%end

%for i=1:length(x)
% if x(i)<.5
%   u0(i)=16*x(i);
%else
%   u0(i)=0;
%end
%end


h = (b-a)/(n+1);
x = a+h:h:b-h;
k = mu*h;
N = floor(T/k)
T=N*k;
t = 0:k:N*k;

% Matriz 'K' para la norma
K = 2*speye(n);
for i=2:n
   K(i-1,i)=-1;
   K(i,i-1)=-1;
end
K=K/(h^2);

% Datos iniciales
%[u0 u1]=datos(x);

regu=reg(t,T);
reguh=[regu(1:N),0];
E=diag(reguh);
E=sparse(E);

%%%%%%%%%%%%%%%%%%%%%%%%%%
% Paso 0: Inicializacion
%%%%%%%%%%%%%%%%%%%%%%%%%%
e0=zeros(n,1);
e1=zeros(n,1);
phix=ondas1(n,mu,a,b,N,h,T,e0,e1);

[psi0 psi1]=ondas2(n,mu,a,b,N,h,T,E,phix,u0,u1);

sm=-psi1;
g0=eliptic(n,a,b,sm);
g1=psi0;

% Inicializamos el residuo 
residuo0=sqrt((g0'*K*g0+g1'*g1)/(n));
residuo=residuo0;
resid=residuo0;

w0=g0;
w1=g1;

%%%%%%%%%%%%%%%%%%%%%
% Paso 1: Descenso
%%%%%%%%%%%%%%%%%%%%%
itera=0;
ciclo=1;
while (residuo/residuo0>=eps)
itera=itera+1
phixn=ondas1(n,mu,a,b,N,h,T,w0,w1);

[psi0n psi1n]=ondas2(n,mu,a,b,N,h,T,E,phixn,u0*0,u1*0);

g0t=eliptic(n,a,b,-psi1n);
g1t=psi0n;

% Calculo de rho
rhon=(g0'*K*g0+g1'*g1)/(n);
rhod=(g0t'*K*w0+g1t'*w1)/(n);
rho=rhon/rhod;

% Actualizacion
e0=e0-rho*w0;
e1=e1-rho*w1;

phix=phix-rho*phixn;
psi0=psi0-rho*psi0n;
psi1=psi1-rho*psi1n; 

g0=g0-rho*g0t;
g1=g1-rho*g1t;

% Test de convergencia
   gamman=(g0'*K*g0+g1'*g1)/(n);
   gamma=gamman/rhon;
  
   w0=g0+gamma*w0;
   w1=g1+gamma*w1;
   
residuo=sqrt((g0'*K*g0+g1'*g1)/(n));
nuevoresi=residuo/residuo0
resid=[resid nuevoresi];

% Hacer que el programa pare si no hay convergencia
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

 
% Funcion 'Ondas1.m'
function resu=ondas1(n,mu,a,b,N,h,T,e0,e1)
% Ecuacion de ondas en dimension 1 con dato final: 
% u_tt-u_xx=0 en (a,b)
% u(a,t)=u(b,t)=0,
% u(x,T)=e0(x).
% u_t(x,T)=e1(x).
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

% Calculo de:
% h = distancia entre dos puntos consecutivos 
% x = coordenadas de los puntos interiores
% k = paso de tiempo
% N = numero de iteraciones T/k
% t = coordenadas temporales de los nodos

x = a+h:h:b-h;
k = mu*h;
t = 0:k:T;
N=length(t)-1;

% Matriz K: discretizacion laplaciano
K = 2*speye(n); 
for i=2:n
   K(i-1,i)=-1;
   K(i,i-1)=-1;
end
K=(1/(h^2))*K;

% Vector F: segundo miembro
F=zeros(n,1);

% Inicializacion 
% de = desplazamiento en n
% dep= desplazamiento en n+1
de=e0;
dep=-k*e1+e0-.5*(k^2)*K*e0;
% Comienzo de las iteraciones
resu(N+1)=-de(n)/h;
for iter =1:N-1
   auxi=dep;
   dep = 2*dep-de-k^2*K*dep;
   de=auxi;
   resu(N-iter+1)=-de(n)/h;
end
resu(1)=0;


% Programa: 'Ondas2.m'
function [resu0,resu1]=ondas2(n,mu,a,b,N,h,T,E,phix,u0,u1)
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

% Parametros del metodo de Newmark:
%    beta =0.
%    gamma =.5 

% Calculo de:
% h = distancia entre dos puntos consecutivos 
% x = coordenadas de los puntos interiores
% k = paso de tiempo
% N = numero de iteraciones T/k
x = a+h:h:b-h;
k = mu*h;

t=0:k:T;
N=length(t)-1;
%phix=reg(t,T).*phix;

e0=u0';
e1=u1';

% Matriz K: discretizacion laplaciano
K = 2*speye(n); 
for i=2:n
   K(i-1,i)=-1;
   K(i,i-1)=-1;
end
K=(1/(h^2))*K;

phix=E*phix';
% Vector F: segundo miembro
F=zeros(n,1);
F(n) = (1/(h^2))*phix(1);

% Inicializacion 
% de = desplazamiento en n
% dep= desplazamiento en n+1
de=e0;
dep=k*e1+e0-.5*(k^2)*K*e0+k^2*F;

% Comienzo de las iteraciones

for iter =1:N
   auxi=dep;
   % Actualizacion de F
   F(n) = (1/(h^2))*phix(iter+1);
   
   dep = 2*dep-de-k^2*K*dep+k^2*F;
   dem=de;
   de=auxi;   
end

resu0=de;
resu1=(dep-dem)/(2*k);

% Programa: 'Poisson.m'
function resu0=eliptic(n,a,b,f)
% Ecuacion de Poisson en dimension 1:
% -u''(x)=f(x) en (a,b)
% u(a)=0, u(b)=0.
% Las funciones f(x) y c(x) se definen en los ficheros f.m y c.m
% Los resultados se escriben en el fichero 'resultados.dat'

% Parametros de entrada:
%    n = numero de puntos interiores
%    a = extremo izquierdo del intervalo
%    b = extremo derecho del intervalo
%    f = segundo miembro

% Parametros de salida
%    solucion del problema eliptico


% Calculo de:
% h = distancia entre dos puntos consecutivos 
% x = coordenadas de los puntos interiores
h = (b-a)/(n+1);
x = a+h:h:b-h;

% Matriz 'mat' y segundo miembro 'sm'
mat = 2*speye(n);
for i=2:n
   mat(i-1,i)=-1;
   mat(i,i-1)=-1;
end
sm = f*h^2;

% Solucion 'sol'
resu0 = mat\sm;

function resu=reg(t,T)
resu(1)=0;
p=length(t);
resu(p)=0;
for i=2:p-1
  resu(i)= exp(1./((t(i)-T/2).^2-(T/2)^2));
end
