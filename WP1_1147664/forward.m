function [sol1N,sol1Np1] = forward(G,dt,N,M1,e01,e11);

% Résoud le système de l'elasticité suivant:

%  dttU - mu*laplacien(U) - (lambda+mu)*grad(div(U)) = 0 dans Q
%  U(x,y,0) = e0	dtU(x,y,0) = e1
%  U = 0 sur sigma

%  où Q = omega X (0,T)
%     omega = carre unite (0,1)X(0,1)
%     sigma = domega X (0,T)

% par un schéma aux différences finies explicite d'ordre 2 en 
% temps et en espace

%*********** Description des variables et constantes ***********
% h		: pas de discrétisation en espace
% X,Y et G	: maillage
% J		: nombre de points sur l'interieur d'un cote
% dt 		: pas de temps du schéma compatible avec la cond CFL
% N		: nombre de pas de temps effectué par forward.m
%***************************************************************

%********************* Variables de sortie *********************
% soliN	: ieme composante de la solution phi au temps N
% soliNp1	: ieme composante de la solution phi au temps N+1
%***************************************************************

u1 = e01;
du1 = e11;
 
Y1nm1 = u1;
Y1nm1 = Y1nm1(G>0);
du1 = du1(G>0);
Y1n = ( M1*Y1nm1 + 2*dt*du1 )/2;

for np1 = 2:N+1 
  Y1np1 = M1*Y1n - Y1nm1;
  Y1nm1 = Y1n; Y1n = Y1np1;
end

sol1N = Y1nm1;
sol1Np1 = Y1n;


