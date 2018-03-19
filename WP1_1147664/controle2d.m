function [c1] = controle2d(phi1n,h,J,G,zone)

% Calculate the control i.e. psi at the edge of the domain in time n*dt


% Zone gives the edges where is applied the control:
% Zone = 1 == > control on all the edges
% Zone = 2 == > control on edges y=0 and y=1
% Zone = 3 == > control on edges x=0 and y=0

% psi =	mu*dn(phi) + (lambda+mu)*nu*div(phi)
% Where dn is the normal by-product and nude the normal unitarian vector 
% iIn the edge.

% REMARK: psi is not defined on 4 corners of the domain because
% the normal by-product does not exist in these points.
% However, the schema diff. finited in 9 points needs of
% the value in these 4 points; we thus choose one 
%       linear interpolation:  psi(coin11) = (psi(2)+psi(J+3))/2
%				psi(coin23) = ( psi((J+2)*J+1)+psi((J+2)*(J+1)+2))/2

%       coin11  BORD2   coin23
%          B               B
%		   O	   		   O
%	       R		       R
%		   D			   D
%		   1			   3
%       coin41  BORD4   coin34


%********** Determination of 4 edges, excluded corners************

%bord1 = find(X==0 & Y<1 & Y>0);
%bord2 = find(Y==1 & X<1 & X>0);
%bord3 = find(X==1 & Y>0 & Y<1);
%bord4 = find(Y==0 & X>0 & X<1);

bord1 = (2:J+1)';
bord2 = (J+3:J+2:(J+2)*J+1)';
bord3 = ((J+2)*(J+1)+2:(J+2)^2-1)';
bord4 = ((J+2)*2:J+2:(J+2)*(J+1))';

psi1n = zeros(J+2);


%******************** psi on bord1 ************************
% 	 (lambda+2*mu)*(phi1n(EE)-4*phi1n(E))/(2h)
%      /
% psin = 
%      \
%	 mu * (phi2n(EE)-4*phi2n(E))/(2h)
%**********************************************************

if zone ~=2
psi1n(bord1) = -phi1n(G(bord1+J+2).*ones(length(bord1),1))/h;
end


%******************** psi on bord2 ************************
% 	 mu*(phi1n(SS)-4*phi1n(S))/(2h)
%      /
% psin = 
%      \
%	 (lambda+2*mu) * (phi2n(SS)-4*phi2n(S))/(2h)
%**********************************************************

if zone ~= 3
psi1n(bord2) =-phi1n(G(bord2+1).*ones(length(bord2),1))/h;
end


%******************** psi on bord3 ************************
% 	 (lambda+2*mu)*(phi1n(WW)-4*phi1n(W))/(2h)
%      /
% psin = 
%      \
%	 mu * (phi2n(WW)-4*phi2n(W))/(2h)
%**********************************************************

if zone == 1 
psi1n(bord3) = -phi1n(G(bord3-J-2).*ones(length(bord3),1))/h;
end


%******************** psi on bord4 ************************
% 	 mu*(phi1n(NN)-4*phi1n(N))/(2h)
%      /
% psin = 
%      \
%	 (lambda+2*mu) * (phi2n(NN)-4*phi2n(N))/(2h)
%***********************************************************

psi1n(bord4) = -phi1n(G(bord4-1).*ones(length(bord4),1))/h;


%******************** treatment of corners ********************
%
%		coin12 A	B coin23
%		  H		    C
%
%
%		  G		    D
%		coin41 F	E coin34
%
% 		psi(coin12) = (psi(A)+psi(H))/2
% 		psi(coin23) = (psi(B)+psi(C))/2
% 		psi(coin34) = (psi(D)+psi(E))/2
% 		psi(coin41) = (psi(F)+psi(G))/2
%
%***************************************************************

psi1n(1) = ( psi1n(J+3) + psi1n(2) )/2;
psi1n((J+2)*(J+1)+1) = ( psi1n((J+2)*J+1)+psi1n((J+2)*(J+1)+2) )/2;
psi1n((J+2)^2) = ( psi1n((J+2)^2-1) + psi1n((J+2)*(J+1)) )/2;
psi1n(J+2) = ( psi1n(J+1) + psi1n(2*J+4) )/2;

c1 = psi1n;




