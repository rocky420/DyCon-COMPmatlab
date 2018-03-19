function sol=animcont_bigrid2d(a,b,J,cfl,T,U01,U11,ek01,ek11,axesol)

disp('|-------------------------------------------------------------------------|')
disp('|                                                                         |')
disp('|                          Control of waves                               |')
disp('|                                                                         |')
disp('|-------------------------------------------------------------------------|')

PAUSE=0.001;

%-------------------------------------------------------------------------
% PARAMETRES POUR LE MAILLAGE
%-------------------------------------------------------------------------

maximo=max(max(U01));
minimo=min(min(U01));

maxi=max(abs(maximo),abs(minimo));

h = (b-a)/(J+1);
x = a:h:b;

[X,Y] = meshgrid(x,x);
Y=flipud(Y);
G = numgrid('S',J+2);

J2 = (J-1)/2;
h2 = 1/(J2+1);
x2 = 0:h2:1;
y2 = x2;

[X2,Y2] = meshgrid(x2,y2);
Y2 = flipud(Y2);
G2 = numgrid('S',J2+2);


dt=cfl*h;
r0= (dt/h)^2;

N = ceil(T/dt);
T=N*dt;

[M1] = matr2d(G,J,r0);

%-------------------------------------------------------------------------------------
%				ANIMATION DE LA STABILISATION
%-------------------------------------------------------------------------------------

freq = 1;
axe1 = [a b a b -maxi maxi];

%***************** affichage de psi au temps 0 ****************************************
axes(axesol);
mesh(X,Y,U01);
title('Position at time t=0');
axis(axe1);

pause(PAUSE);

%***************** calcul du controle au temps 0 **************************************

[c1] = controle2d(ek01(G>0),h,J,G,1);
[bc1] = bdycond2d(c1,X,Y,G,r0,h,J);

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
   
   [c1] = controle2d(phi1n,h,J,G,1);
   [bc1] = bdycond2d(c1,X,Y,G,r0,h,J);

   psi1np1 = M1*psi1n -psi1nm1 + bc1;
   freepsi1np1 = M1*freepsi1n -freepsi1nm1 ;

   %*********************** affichage de psinp1 et freepsinp1 *****************************
   if rem(n+1,freq) == 0

    % Psi1np1 = G; Psi1np1(G>0) = full(psi1np1(G(G>0)));
    % subplot(2,1,1);mesh(X,Y,Psi1np1+c1);
    % axis(axe1);
    % text1 = ['psi1 avec controle t=' num2str((n+1)*dt)];
    % title(text1);
     
    % Freepsi1np1 = G; Freepsi1np1(G>0) = full(freepsi1np1(G(G>0)));
    % subplot(2,1,2);mesh(X,Y,Freepsi1np1);
    % axis(axe1);
    % text1 = ['psi1 sans controle t=' num2str((n+1)*dt)];
    % title(text1);
     
    % pause(0.5);
          
       Psi1np1 = G; Psi1np1(G>0) = full(psi1np1(G(G>0)));
       mesh(X,Y,Psi1np1+c1);
       axis(axe1);
     text1 = ['Position at time t =' num2str((n+1)*dt)];
     title(text1);
     
    % Freepsi1np1 = G; Freepsi1np1(G>0) = full(freepsi1np1(G(G>0)));
    % subplot(2,1,2);mesh(X,Y,Freepsi1np1);
    % axis(axe1);
    % text1 = ['psi1 sans controle t=' num2str((n+1)*dt)];
    % title(text1);
     
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

Psi1np1 = G; Psi1np1(G>0) = full(psi1n(G(G>0)));
Freepsi1np1 = G; Freepsi1np1(G>0) = full(freepsi1n(G(G>0)));

normfin = normel22(Psi1np1+c1,J,h)/normel22(U01,J,h);
normfin2 = normel22(Freepsi1np1,J,h)/normel22(U01,J,h);

disp(sprintf('with control ||uc(T)|| L2(omega) / ||u0|| L2(omega) = %g',normfin));
disp(sprintf('without control ||uc(T)|| L2(omega) / ||u0|| L2(omega) = %g',normfin2));

sol=1;

end



