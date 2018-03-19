function [sol1n]=psiback(M1,bc1,psi1np1,psi1n)

% R�soud de fa�on r�trograde le syst�me de l'elasticit� suivant:

% dttU - mu*laplacien(U) - (lambda+mu)*grad(div(U)) = 0 dans Q
% U(x,y,T)=e0 dtU(x,y,0)=e1
% U = mu*dnU + (lambda+mu)*nu*div(U) sur sigma
% o� dn est la deriv�e normale et nu, le vecteur normal

% par un sch�ma aux diff finies d'ordre 2 en temps et en espace

% un seul pas de temps est calcul�

psi1nm1 = M1*psi1n - psi1np1 + bc1;
sol1n = psi1nm1;
  



