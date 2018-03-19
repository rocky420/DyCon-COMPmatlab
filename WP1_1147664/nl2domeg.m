function z = nl2domeg(f,J)

% calcule la norme L2 de f sur le bord du carre
% le domaine "bouclant sur lui meme, les coeff associés aux
% differents points sont 1

%********** Détermination du bord, coins inclus************

%bord1 = find(X==0 & Y<1 & Y>0);
%bord2 = find(Y==1 & X<1 & X>0);
%bord3 = find(X==1 & Y>0 & Y<1);
%bord4 = find(Y==0 & X>0 & X<1);


z = sqrt(f(1)*f(1)+f(J+2)*f(J+2));

