% Introducir los datos iniciales:
% u0=u(0,x)
% u1=u_t(0,x)
function [u0,u1]=data4(x)
% Ejemplo 2: funcion sombrero
for i=1:length(x)
if x(i)<.5
   u1(i)=2*x(i);
else
  u1(i)=0;
end
end

for i=1:length(x)
if x(i)<.5
   u0(i)=2*x(i);
else
  u0(i)=2*(1-x(i));
end
end