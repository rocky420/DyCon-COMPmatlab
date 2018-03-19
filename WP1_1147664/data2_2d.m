function [U01,U11]=data2_2d(X,Y,T)

U01 = 10*( sin(pi*X).*sin(pi*Y) );
U11 = zeros(size(X));

%end



