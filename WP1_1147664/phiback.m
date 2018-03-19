function [sol1n]=phiback(M1,phi1np1,phi1n)

% Résoud de façon rétrograde le système de l'elasticité suivant:

% dttU - mu*laplacien(U) - (lambda+mu)*grad(div(U)) = 0 dans Q
% U(x,y,T)=e0 dtU(x,y,0)=e1
% U = 0 sur sigma

% par un schéma aux diff finies d'ordre 2 en temps et en espace

% un seul pas de temps est calculé: phi au temps n*dt

phi1nm1 = M1*phi1n - phi1np1;
sol1n = phi1nm1;

  



