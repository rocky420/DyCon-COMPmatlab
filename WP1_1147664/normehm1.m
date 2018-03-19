function z = normehm1(f,M,G,J,x,h)

% Calcule la norme H-1 de la fonction scalaire f donnée sous forme 
% matricielle sur le maillage du carré
% f est donnee sous forme vectorielle

% G maillage
% D matrice du laplacien negatif: D=delsq(G)

% normeh-1 (f) = normeh10(w) où w solution de
% -laplacien(w) = f dans omega
% w = 0 sur domega

% calcule de w
f = f*h^2;
w = -M\f;
W = zeros(1,J+2);
W(G>0) = w;

% norme h10 de W
z = normeh10(W,J,x,h);