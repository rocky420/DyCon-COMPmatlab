% Introducir los datos iniciales:
% u0=u(0,x)
% u1=u_t(0,x)
function [u0,u1]=data0(x)

% Ejemplo 1
u0=sin(pi*x);
u1=-pi*sin(pi*x);


% Ejemplo 2: funcion sombrero
% u1=0*x;
% for i=1:length(x)
% if x(i)<.5
%    u0(i)=2*x(i);
% else
%   u0(i)=0;
% end
% end

% Ejemplo 3: 100 modos de Fourier
% resu=0*x;
% for i=1:25
%  resu=resu+(-1/(i*pi)*cos(i*pi/2)+2/(i^2*pi^2)*sin(i*pi/2))*...
%     sin(i*pi*x);
% end
% u0=resu;
% u1=0*x;

% Ejemplo 4: funcion sombrero
% for i=1:length(x)
% if x(i)<.5
%    u1(i)=2*x(i);
% else
%   u1(i)=0;
% end
% end
% 
% for i=1:length(x)
% if x(i)<.5
%    u0(i)=2*x(i);
% else
%   u0(i)=2*(1-x(i));
% end
% end