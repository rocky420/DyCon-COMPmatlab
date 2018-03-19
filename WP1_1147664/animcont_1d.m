function sol=animcont_1d(a,b,J,mu,T,alpha,theta,u0,u1,ek01,ek11,axesol)

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

PAUSE=0.001;


%-------------------------------------------------------------------------
% PARAMETRES POUR LE MAILLAGE
%-------------------------------------------------------------------------

U01=u0';
U11=u1';

maximo=max(U01);
minimo=min(U01);
maxi=max(abs(maximo),abs(minimo))

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
dt=mu*h;
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

%-------------------------------------------------------------------------------------
%				ANIMATION DE LA STABILISATION
%-------------------------------------------------------------------------------------

freq = 1;
axe1 = [a b -maxi maxi];

%***************** affichage de psi au temps 0 ****************************************

axes(axesol);
plot(x,U01);
title('Psi t=0');
axis(axe1);

pause(0.05);

%***************** calcul du controle au temps 0 **************************************

[c1] = controleA(ek01(G>0),h,J,A);
[bc1] = bdycondA(c1,r0,J,A);
bc1=Mt\bc1;

%***************** calcul de psi au temps dt *********************

psi1n = ( M1*U01(G>0) + 2*dt*U11(G>0) + bc1 ) / 2;

%***************** calcul de psi au temps t sans controle *****************************
freepsi1n = ( M1*U01(G>0) + 2*dt*U11(G>0) ) / 2;

%***************** calcul de phi au temps dt ******************************************
phi1n = ( M1*ek01(G>0) + 2*dt*ek11(G>0) ) / 2;

%***************** initialisation de psi et phi au temps 0 pour la boucle ********************
psi1nm1 = U01(G>0);
phi1nm1 = ek01(G>0);

freepsi1nm1 = U01(G>0);
for n = 1:N
   
   [c1] = controleA(phi1n,h,J,A);
   [bc1] = bdycondA(c1,r0,J,A);
   bc1=Mt\bc1;

   psi1np1 = M1*psi1n -psi1nm1 + bc1;
   freepsi1np1 = M1*freepsi1n -freepsi1nm1 ;

   %*********************** affichage de psinp1 et freepsinp1 *****************************
   if rem(n+1,freq) == 0
       %axes(axesol);
       Psi1np1 = zeros(J+2,1); Psi1np1(G>0) = psi1np1;
       newplot;
       plot(x,Psi1np1+c1);
       axis(axe1);
     text1 = ['psi au temps t =' num2str((n+1)*dt)];
     title(text1);
          
     pause(PAUSE);

    end %if

   psi1nm1 = psi1n; psi1n = psi1np1;
   freepsi1nm1 = freepsi1n; freepsi1n = freepsi1np1;

%************* calcul de dpsi/dt(T)
   if n == N
	dpsi1Np1 = (psi1np1-psi1nm1)/2/dt;
   end

   %************* calcul de phi pour le calcul du controle à n+2
   phi1np1 = M1*phi1n - phi1nm1 ;
   phi1nm1 = phi1n; phi1n = phi1np1;
   
end %for

Psi1np1 = zeros(J+2,1); Psi1np1(G>0) = psi1n;
Freepsi1np1 = zeros(J+2,1); Freepsi1np1(G>0) = freepsi1n;

normfin = normel22(Psi1np1+c1,J,h)/normel22(U01,J,h);
normfin2 = normel22(Freepsi1np1,J,h)/normel22(U01,J,h);

disp(sprintf('avec controle ||uc(T)|| L2(omega) / ||u0|| L2(omega) = %g',normfin));
disp(sprintf('sans controle ||uc(T)|| L2(omega) / ||u0|| L2(omega) = %g',normfin2));

sol=1;

end



