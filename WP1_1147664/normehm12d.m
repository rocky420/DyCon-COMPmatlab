function z = normehm12d(f,D,G,J,x,y,h)

% Calculate the standard H-1 of the scalar function given 
% under matrix shape on the meshing of the square f is given under shape vector

% G meshing
% D matrix of the laplacien negatif: D=delsq ( G )

% Normeh-1 ( f ) = normeh10 ( w ) where w solution of
% -laplacien ( w ) = f in omega
% W = 0 on boundary of omega

% calculate of W
f = f*h^2;
w = D\f;
W = zeros(J+2);
W(G>0) = full(w(G(G>0)));

% norm h10 of W
z = normeh102d(W,J,x,y,h);