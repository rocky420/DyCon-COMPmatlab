% Introducir los datos iniciales:
% u0=u(0,x)
% u1=u_t(0,x)
function [u0,u1]=data3(x)

% Ejemplo 1

resu=0*x;
for i=1:25
 resu=resu+(-1/(i*pi)*cos(i*pi/2)+2/(i^2*pi^2)*sin(i*pi/2))*...
    sin(i*pi*x);
end
u0=resu;
u1=0*x;
