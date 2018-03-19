function z1 = normel22(f,J,h)

% Calcule la norme L2 de la fonction f donn�e sous la forme 
% d'une matrice sur le carr�.

% L'int�gration num�rique est faite avec la m�thode des trap�zes.
% diff�re de normel2 par le fait qu'elle n'est calcul� que sur l'
% int�rieur du domaine.


f = f.^2;
res = h * sum(f(2:J+1));
z1 = sqrt(res);


	 