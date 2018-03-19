% Introducir los datos iniciales:
% u0=u(0,x)
% u1=u_t(0,x)
function [u0,u1]=data1(x)

% Ejemplo 1
u0=sin(pi*x);
u1=-pi*sin(pi*x);

%u1=0*x;
% Ejemplo 2: 100 modos de Fourier
%resu=0*x;
%u0=0*x;
%for i=1:50
%  resu= resu+sin(i*pi*x);
%end

%u0=resu/50; 

% Ejemplo 3: funcion sombrero
%resu=x*0;
%for i=1:length(x)/2
%   resu(i)=3*x(i);
%end

%for i=1:length(x)
% if x(i)<.5
%   u0(i)=16*x(i);
%else
%  u0(i)=0;
%end
%end