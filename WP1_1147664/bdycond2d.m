function [bc1] = bdycond2d(c1,X,Y,G,r0,h,J)

% ******************* Conditions of edge *************************
% REMARK: in what follows, we count twice the rates
% corners of the domain in the second member; we make a treatment
% private individual at the end to compensate.

cb1 = zeros(J^2,1);

%bord1 = find(X==h & Y<1 & Y>0);
%bord2 = find(Y==1-h & X<1 & X>0);
%bord3 = find(X==1-h & Y>0 & Y<1);
%bord4 = find(Y==h & X>0 & X<1);
bord1 = (J+4:2*(J+2)-1)';
bord2 = (J+4:J+2:(J+2)*J+2)';
bord3 = ((J+2)*J+2:(J+2)*(J+1)-1)';
bord4 = (2*(J+2)-1:J+2:(J+2)*(J+1)-1)';

cb1(G(bord1).*ones(length(bord1),1)) = r0*c1(bord1-J-2);
cb1(G(bord2).*ones(length(bord2),1)) = cb1(G(bord2).*ones(length(bord2),1)) + r0*c1(bord2-1);
cb1(G(bord3).*ones(length(bord3),1)) = cb1(G(bord3).*ones(length(bord3),1)) + r0*c1(bord3+J+2);
cb1(G(bord4).*ones(length(bord4),1)) = cb1(G(bord4).*ones(length(bord4),1)) + r0*c1(bord4+1);

bc1 = cb1;


