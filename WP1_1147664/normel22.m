function z1 = normel22(f,J,h)

% Calcule la norme L2 de la fonction f donnée sous la forme 
% d'une matrice sur le carré.

% L'intégration numérique est faite avec la méthode des trapèzes.
% diffère de normel2 par le fait qu'elle n'est calculé que sur l'
% intérieur du domaine.


f = f.^2;
res = h * sum(f(2:J+1));
z1 = sqrt(res);


	 