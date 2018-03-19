function [z1,z2] = normel2(f,J,h)

% Calcule la norme L2 de la fonction f donn�e sous la forme 
% d'une matrice sur le carr�.
% L'int�gration num�rique est faite avec la m�thode des trap�zes.
% Les poids associ�s aux diff�rents points du maillage sont les
% suivant:	w = 0.25 pour les sommets du carr�
%		w = 0.5 pour les points du bord du domaine qui
%			ne sont pas des sommets du domaine
%		w = 1 pour les points int�rieurs au domaine


f = f.^2;
res = h * sum(f(2:J+1));
res = res + h * 0.5 * ( f(1) + f(J+2) );
z1 = sqrt(res);


	 