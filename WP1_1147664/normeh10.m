function z = normeh10(f,J,x,h)

% calcule du gradient de f
[dxf] = gradient(f,x);

z = normel2(dxf,J,h);