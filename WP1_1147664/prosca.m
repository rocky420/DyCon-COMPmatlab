function r = prosca(u01,u11,v01,v11,x,h,G);

% Calcule le produit scalaire dans (H10)^2 X (L2)^2 par 
% la méthode des trapezes sur des carres.

% les uii et vii sont donnés sous forme matricielle

[dxu01] = gradient(u01,x);
[dxv01] = gradient(v01,x);
z1a = h * sum ( dxu01(G>0).* dxv01(G>0));
z1b = h * sum ( u11(G>0).* v11(G>0));
z1a = z1a + h * 0.5 * sum (dxu01(G==0).* dxv01(G==0));
z1b = z1b + h * 0.5 * sum (u11(G==0).*v11(G==0));
r = z1a + z1b ;

