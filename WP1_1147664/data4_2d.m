function [U01,U11]=data4_2d(X,Y,T)

U01 = 10*( sin(3*pi*X).*sin(2*pi*Y) );
U11=zeros(size(X));

%end

