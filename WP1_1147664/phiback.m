function [sol1n]=phiback(M1,phi1np1,phi1n)

% R�soud de fa�on r�trograde le syst�me de l'elasticit� suivant:

% dttU - mu*laplacien(U) - (lambda+mu)*grad(div(U)) = 0 dans Q
% U(x,y,T)=e0 dtU(x,y,0)=e1
% U = 0 sur sigma

% par un sch�ma aux diff finies d'ordre 2 en temps et en espace

% un seul pas de temps est calcul�: phi au temps n*dt

phi1nm1 = M1*phi1n - phi1np1;
sol1n = phi1nm1;

  



