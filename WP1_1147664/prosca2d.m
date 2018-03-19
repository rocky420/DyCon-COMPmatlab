function r = prosca2d(u01,u11,v01,v11,...
			x,J,h,G,X,Y);

% Calculate the scalar product in (H10)^2 X (L2)^ 2 by 
% the method of trapezes on edges.

% uii and vii is given under matrix shape

bord = find ( X==0 | X==1 | Y==0 | Y==1 );
coin = [1 J+2 (J+2)*(J+1)+1 (J+2)^2 ]';

[dxu01,dyu01] = gradient(u01,x,x);
[dxv01,dyv01] = gradient(v01,x,x);

z1a = h^2 * sum ( dxu01(G>0).* dxv01(G>0) + dyu01(G>0).* dyv01(G>0) );
z1b = h^2 * sum ( u11(G>0).*v11(G>0) );

z1a = z1a + h^2 * 0.5 * sum ( dxu01(bord).* dxv01(bord) + dyu01(bord).* dyv01(bord) );
z1b = z1b + h^2 * 0.5 * sum (u11(bord).*v11(bord) );

z1a = z1a - h^2 * 0.25 * sum ( dxu01(coin).* dxv01(coin) + dyu01(coin).* dyv01(coin) );
z1b = z1b - h^2 * 0.25 * sum ( u11(coin).*v11(coin) );

r = z1a + z1b ;

