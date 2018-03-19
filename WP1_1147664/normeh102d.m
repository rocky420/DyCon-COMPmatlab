function z = normeh102d(f,J,x,y,h)

% calcule la norme h10 de la fonction f donée sous la forme
% matricielle sur le maillage du carre

% calcule du gradient de f
[dxf,dyf] = gradient(f,x,y);

z = sqrt( normel22d(dxf,J,h)^2+normel22d(dyf,J,h)^2 );