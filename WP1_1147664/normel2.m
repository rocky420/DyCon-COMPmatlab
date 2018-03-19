function [z1,z2] = normel2(f,J,h)

% Calcule la norme L2 de la fonction f donnée sous la forme 
% d'une matrice sur le carré.
% L'intégration numérique est faite avec la méthode des trapèzes.
% Les poids associés aux différents points du maillage sont les
% suivant:	w = 0.25 pour les sommets du carré
%		w = 0.5 pour les points du bord du domaine qui
%			ne sont pas des sommets du domaine
%		w = 1 pour les points intérieurs au domaine


f = f.^2;
res = h * sum(f(2:J+1));
res = res + h * 0.5 * ( f(1) + f(J+2) );
z1 = sqrt(res);


	 