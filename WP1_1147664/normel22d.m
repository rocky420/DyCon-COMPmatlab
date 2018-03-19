function [z1,z2] = normel22d(f,J,h)

% Calculate the standard L2 of the function f given under the shape of a matrix on the square.
% The digital integration is made with the method of trapezes.
% The weights associated to the various points of the meshing are
% Following one: 
%   w = 0.25 for the summits of the square
%   w = 0.5 for the points of the edge of the domain which
% Summits of the domain are not
%   w = 1 for the internal points in the domain


f = f.^2;

res = h^2 * sum( sum( f(2:J+1,2:J+1) ));

res = res + h^2 * 0.5 * ( sum( f(2:J+1,1) ) + sum( f(2:J+1,J+2) ) + ...
			 sum( f(1,2:J+1) ) + sum( f(J+2,2:J+1) ) );

res = res + h^2 * 0.25 * ( f(1,1) + f(1,J+2) + f(J+2,1) + f(J+2,J+2) );

z1 = sqrt(res);


	 