function z = nl2domeg2d(f,X,Y,J,h)

% Calculate the standard L2 of f on the edge of coeff associated to the 
% hurt differents square the domain

% ********** Determination of the edge, the inclusive corners************ 
%bord1 = find(X==0 & Y<1 & Y>0);
%bord2 = find(Y==1 & X<1 & X>0);
%bord3 = find(X==1 & Y>0 & Y<1);
%bord4 = find(Y==0 & X>0 & X<1);

bord1 = (2:J+1)';
bord2 = (J+3:J+2:(J+2)*J+1)';
bord3 = ((J+2)*(J+1)+2:(J+2)^2-1)';
bord4 = ((J+2)*2:J+2:(J+2)*(J+1))';

bord = [bord1;bord2;bord3;bord4;1;J+2;(J+2)*(J+1)+1;(J+2)^2];

f = f.*f;

z = sqrt( h*sum(f(bord)) );

