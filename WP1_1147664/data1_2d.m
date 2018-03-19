function [U01,U11]=data1_2d(X,Y,T)

% Glowinski test

psi0ex = -pi*( sin(pi*X).*cos(2*pi*Y) + cos(2*pi*X).*sin(pi*Y) );
dpsi0ex = -sqrt(2)*pi^2*( sin(pi*X).*cos(2*pi*Y) + cos(2*pi*X).*sin(pi*Y) );

psi1ex = -sqrt(2)*2*pi*T*sin(pi*X).*sin(pi*Y) + ...
		28/3/sqrt(2)*sin(pi*sqrt(2)*T)*sin(pi*X).*sin(pi*Y);

inter1 = 0;
inter2 = 0;
for po = 3:2:255
inter1 = inter1 + ...
		po/(po^2-1)*( 2/sqrt(1+po^2)*sin(pi*sqrt(1+po^2)*(-T)) + ...
				  3*sqrt(2)/(po^2-4)*sqrt(2)/2 ) * sin(po*pi*Y);
inter2 = inter2 + ...
		po/(po^2-1)*( 2/sqrt(1+po^2)*sin(pi*sqrt(1+po^2)*(-T)) + ...
				  3*sqrt(2)/(po^2-4)*sqrt(2)/2 ) * sin(po*pi*X);
end
psi1ex = psi1ex + 4*sin(pi*X).*inter1 + 4*sin(pi*Y).*inter2;

dpsi1ex = 4*pi*sqrt(2)/2*sin(pi*X).*sin(pi*Y) + ...
		4*pi^2*T*sin(pi*X).*sin(pi*Y) - ...
		28/3/sqrt(2)*pi*sqrt(2)*cos(pi*sqrt(2)*T)*sin(pi*X).*sin(pi*Y);

inter1 = 0;
inter2 = 0;
for po = 3:2:255
inter1 = inter1 + ...
		po/(po^2-1)*( 2*pi*cos(pi*sqrt(1+po^2)*(-T)) + ...
	3*sqrt(2)/(po^2-4)*pi ) * sin(po*pi*Y);
inter2 = inter2 + ...
		po/(po^2-1)*( 2*pi*cos(pi*sqrt(1+po^2)*(-T)) + ...
	3*sqrt(2)/(po^2-4)*pi ) * sin(po*pi*X);
end
dpsi1ex = dpsi1ex + 4*sin(pi*X).*inter1 + 4*sin(pi*Y).*inter2;

U01 = psi1ex+psi0ex;
U11 = dpsi1ex+dpsi0ex;

%end 





