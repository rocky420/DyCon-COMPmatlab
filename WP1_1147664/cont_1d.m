function [controlex,Test,temps,ek01,ek11]=cont_1d(a,b,J,cfl,T,epstest,alpha,theta,u0,u1)

disp('|-------------------------------------------------------------------------|')
disp('|                                                                         |')
disp('|                         Controle des ondes                              |')
disp('|                                                                         |')
disp('|                     Arnaud Munch - UAM - Fall 03                        |') 
disp('|                                                                         |')
disp('|-------------------------------------------------------------------------|')

%-------------------------------------------------------------------------
% PARAMETRES DIVERS
%-------------------------------------------------------------------------

%********************* test d'arret du gradient **************************

echelle=1.;
PAUSE=0.001;
limite = 200;

%-------------------------------------------------------------------------
% PARAMETRES POUR LE MAILLAGE
%-------------------------------------------------------------------------

U01=u0';
U11=u1';
h = (b-a)/(J+1);
x = a:h:b;

% Construction de G
G=zeros(1,J+2);
for i=2:J+1
   G(i)=i-1;
end  

%------------------
% C.F.L. PARAMETER
%------------------

% 
%  Rq: 1) The case theta=alpha < 1/4 leads to dt=h and so to the usual exact explicit scheme
%      2) The case theta < alpha leading to dt > h requires T >= 2 (dt/h)^2
%      3) The case theta > alpha leading to dt < h requires T >= 2
%      4) The case alpha=1/12 leads to a consistancy of order 4 in time and 2 in space. 
%           a good choice is then alpha =1/12 and theta < 1/12
%      5) The case theta=1/12 leads to a consistancy of order 2 in time and 4 in space. 
%           a good choice is then theta =1/12 and alpha < 1/12

% VALID FOR alpha,theta <1/4%
dt=cfl*h;
r0= (dt/h)^2;
thetanu=theta-alpha*r0;

% VALID FOR alpha=theta=1/4%
%     6) In the case theta=alpha=1/4 (S.Micu and C. Castro), takes
%C= 0.9;  % for instance  
%dt= C*h;    
%r0 =(dt/h)^2;
%thetanu = 1/4*(1-r0);  % in this case T =>2

%-------------------------------
% Time T of exact controlability
%-------------------------------
N = ceil(T/dt);
T=N*dt;

%------------------------
%location of the control
%------------------------

%A=0;  the control is active at x=1;   A=1; the control is active at x=0 and x=1;
A=0; 

time1=cputime;

%------------------------
%  MATRIX CONSTRUCTION
%------------------------

M=-2*speye(J);
for i=1:J-1
   M(i,i+1)=1;
   M(i+1,i)=1;
end

Mt=thetanu*M+speye(J);
M1 = 2*Mt + r0*M;
M1 = Mt\M1;

%**				ETAPE 0					          **
%**									                **
%**		       	INITIALISATION					 **
%--------------------------------------------------------------------------
%	 RESOLUTION POUR PHI0 DE L'EQUATION D'ELASTICITE AVEC DES 
% CONDITIONS DE BORD NULLES ET INITIALISEE PAR phi0(t=0)=0 et dphi0(t=0)=0
%--------------------------------------------------------------------------

ek01 = zeros(J+2,1);
ek11 = ek01;

[phik1N,phik1Np1] = forward(G,dt,N,M1,ek01,ek11);
          
%---------------------------------------------------------------------------
%	RESOLUTION POUR PSI0 DE L'EQUATION D'ELASTICITE AVEC DES 
% CONDITIONS DE BORD NON NULLES ET INITIALISEE PAR psi0(t=T)=0 et dphi0(t=T)=0
%---------------------------------------------------------------------------

%*********************** cas n=N ==> calcul de psi0(N-1) *******************

%			*********************************
%			*   Calcul de psi0 sur domega   *
%			*    	   au temps N		        *
%			*********************************

[c1] = controleA(phik1N,h,J,A);
double(c1);

%			*********************************
%			*   Calcul de psi0 au temps N-1 *
%			*********************************

[bc1] = bdycondA(c1,r0,J,A);
bc1=Mt\bc1;
double(bc1);
psik1Nm1 = bc1/2;

phik1np2 = phik1Np1; phik1np1 = phik1N; 
psik1np1 = zeros(J,1); 
psik1n = psik1Nm1; 

for n = N-1:-1:0

%*********************** cas n<N ==> calcul de psi0(n-1) *******************

%			*********************************
%			*   Calcul de phi0 au temps n   *
%			*********************************

[phik1n] = phiback(M1,phik1np2,phik1np1);

%			*********************************
%			*   Calcul de psi0 au temps n-1 *
%			*********************************

[c1] = controleA(phik1n,h,J,A);
[bc1] = bdycondA(c1,r0,J,A);
bc1=Mt\bc1;
[psik1nm1] = psiback(M1,bc1,psik1np1,psik1n);

%			**********************************
%			* 	preparation du prochain    *
%			* 	passage dans la boucle	   *
%			**********************************

phik1np2 = phik1np1; phik1np1=phik1n;
psik1np1 = psik1n; psik1n = psik1nm1;

if n==1
  % sauvegarde de psi au temps 1 pour le calcul de dtpsi(t=0)
  psik11 = psik1np1;
end %if
end %for

%------------------------------------------------------------------------
% Calcul des résidus g0 et g1
%------------------------------------------------------------------------

smbre1 = h^2*((psik11-psik1n)/(2*dt) - U11(G>0)) ;
gk01 = -M\smbre1;

Gk01 = zeros(J+2,1);
Gk01(G>0) = gk01;

Gk11 = zeros(J+2,1);
Gk11(G>0) = Mt\(U01(G>0)-psik1np1);

% Norme de (g0,g1)

normg0 = sqrt(prosca(Gk01,Gk11,Gk01,Gk11,x,h,G) );
normgk = normg0;

%---------------------------------------------------
% Calcul de la nouvelle direction de descente
%---------------------------------------------------

Wk01=Gk01; Wk11=Gk11;
test = normg0^2/(normel2(U01,J,h)^2+normehm1(U11(G>0),M,G,J,x,h)^2);
passage = 0;
Test = test;
while (test > epstest) & (passage<limite)        %  WHILE

%**************************************************************************
%**************************************************************************
%**									 **
%**				ETAPE 1					 **
%**									 **
%**		       	DESCENTE					 **
%**									 **
%**************************************************************************
%**************************************************************************
%--------------------------------------------------------------------------
%	 RESOLUTION POUR PHIBK DE L'EQUATION D'ELASTICITE AVEC DES 
% CONDITIONS DE BORD NULLES ET INITIALISEE PAR phibk(t=0)=w0 et dphibk(t=0)=w1
%--------------------------------------------------------------------------

[phibk1N,phibk1Np1] = forward(G,dt,N,M1,Wk01,Wk11);

%---------------------------------------------------------------------------
%	RESOLUTION POUR PSIBK DE L'EQUATION D'ELASTICITE AVEC DES 
% CONDITIONS DE BORD NON NULLES ET INITIALISEE PAR psibk(t=T)=0 et dpsibk(t=T)=0
%---------------------------------------------------------------------------

%*********************** cas n=N ==> calcul de psi0(N-1) *******************

%			**********************************
%			*   Calcul de psibk sur domega   *
%			*    	   au temps N		         *
%			**********************************

[c1] = controleA(phibk1N,h,J,A);

%			*********************************
%			*   Calcul de psi0 au temps N-1 *
%			*********************************

[bc1] = bdycondA(c1,r0,J,A);
bc1=Mt\bc1;
psibk1Nm1 = bc1/2;

phibk1np2 = phibk1Np1; phibk1np1 = phibk1N; 
psibk1np1 = zeros(J,1); psibk1n = psibk1Nm1; 

for n = N-1:-1:0

%*********************** cas n<N ==> calcul de psi0(n-1) *******************

%			*********************************
%			*   Calcul de phi0 au temps n   *
%			*********************************

[phibk1n] = phiback(M1,phibk1np2,phibk1np1);

%			*********************************
%			*   Calcul de psibk au temps n-1 *
%			*********************************

[c1] = controleA(phibk1n,h,J,A);

[bc1] = bdycondA(c1,r0,J,A);
bc1=Mt\bc1;

[psibk1nm1] = psiback(M1,bc1,psibk1np1,psibk1n);

%			**********************************
%			* 	preparation du prochain    *
%			* 	passage dans la boucle	   *
%			**********************************

phibk1np2 = phibk1np1; phibk1np1=phibk1n;
psibk1np1 = psibk1n; psibk1n = psibk1nm1;

if n==1
% sauvegarde de psi au temps 1 pour le calcul de dtpsi(t=0)
  psibk11 = psibk1np1;
end %if
end %for

%------------------------------------------------------------------------
% Calcul des résidus g0 et g1
%------------------------------------------------------------------------

smbre1 = h^2*(psibk11-psibk1n)/(2*dt);
gbk01 = -M\smbre1;

% mise sous forme matricielle avec les valeurs au bord du domaine

Gbk01 = zeros(J+2,1);
Gbk01(G>0) = gbk01;

Gbk11 = zeros(J+2,1);
Gbk11(G>0) = -Mt\psibk1np1;

ps = prosca(Gbk01,Gbk11,Wk01,Wk11,x,h,G);
rhok = normgk^2/ps;

%----------------------------------------------------------------
% Actualisation des variables pour le prochain 
% passage dans la boucle
%----------------------------------------------------------------

% actualisation de e^k
ek01 = ek01 - rhok*Wk01;
ek11 = ek11 - rhok*Wk11;

% actualisation de g^k
Gk01 = Gk01 - rhok*Gbk01;
Gk11 = Gk11 - rhok*Gbk11;

%**************************************************************************
%**************************************************************************
%**									 **
%**				ETAPE 2					 **
%**									 **
%**		       	CONVERGENCE					 **
%**									 **
%**************************************************************************
%**************************************************************************

normgkp1 = sqrt(prosca(Gk01,Gk11,Gk01,Gk11,x,h,G));

test = ( normgkp1/normg0 )^2;
Test=[Test;test];

gammak = ( normgkp1/normgk )^2;

Wk01 = Gk01 + gammak*Wk01;
Wk11 = Gk11 + gammak*Wk11;

normgk = normgkp1;

passage = passage+1;
disp('***********************************************');
disp(sprintf('itération du gradient = %g',passage));
disp(sprintf('residu (norme) = %g',test));
disp('***********************************************');

end %while

passage=passage+1;

if (test > epstest) & (passage > limite)
    [p] = error3;
    delete(p);
end
    
%**************************************************************************
%**************************************************************************
%**									 **
%**				CONTROLE					 **
%**									 **
%**************************************************************************
%**************************************************************************

[phik1N,phik1Np1] = forward(G,dt,N,M1,ek01,ek11);

%---------------------------------------------------------------------------
%	RESOLUTION POUR PSI0 DE L'EQUATION D'ELASTICITE AVEC DES 
% CONDITIONS DE BORD NON NULLES ET INITIALISEE PAR psi0(t=T)=0 et dphi0(t=T)=0
%---------------------------------------------------------------------------

%*********************** cas n=N ==> calcul de psi0(N-1) *******************

%			*********************************
%			*   Calcul de psi0 sur domega   *
%			*    	   au temps N		*
%			*********************************

[c1] = controleA(phik1N,h,J,A);
controlex=c1(J+2);

%			*********************************
%			* Calcul de la norme L2(domega) *
%			*	   du controle		  *
%			*********************************

normecontr = nl2domeg(c1,J);
temps = N*dt;

%			*********************************
%			*   Calcul de psi0 au temps N-1 *
%			*********************************

[bc1] = bdycondA(c1,r0,J,A);
bc1=Mt\bc1;
psik1Nm1 = bc1/2;

phik1np2 = phik1Np1; phik1np1 = phik1N; 
psik1np1 = zeros(J,1); psik1n = psik1Nm1; 

for n = N-1:-1:0

%*********************** cas n<N ==> calcul de psi0(n-1) *******************

%			*********************************
%			*   Calcul de phi0 au temps n   *
%			*********************************

[phik1n] = phiback(M1,phik1np2,phik1np1);

%			*********************************
%			*   Calcul de psi0 au temps n-1 *
%			*********************************

[c1] = controleA(phik1n,h,J,A);
controlex=[c1(J+2);controlex];

%			*********************************
%			* Calcul de la norme L2(domega) *
%			*	   du controle		  *
%			*********************************

normecontr = [normecontr;nl2domeg(c1,J)];
temps = [temps;n*dt];

[bc1] = bdycondA(c1,r0,J,A);
bc1=Mt\bc1;

[psik1nm1] = psiback(M1,bc1,psik1np1,psik1n);

%			**********************************
%			* 	preparation du prochain    *
%			* 	passage dans la boucle	   *
%			**********************************

phik1np2 = phik1np1; phik1np1=phik1n;
psik1np1 = psik1n; psik1n = psik1nm1;

if n==1

% sauvegarde de psi au temps 1 pour le calcul de dtpsi(t=0)
  psik11 = psik1np1;

end %if
end %for

time2=cputime-time1;

disp(sprintf('CPUTIME = %g seconde(s)', time2));

end



