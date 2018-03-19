% Introducir los datos iniciales:
% u0=u(0,x)
% u1=u_t(0,x)
function [u0,u1]=data2(x)
% Ejemplo 2: funcion sombrero
u1=0*x;
for i=1:length(x)
if x(i)<.5
   u0(i)=2*x(i);
else
  u0(i)=0;
end
end