
% We consider the 2-D version of the above problem in a square domain
% Omega =(a,b)×(a,b) subset in R^2.
% We assume that the control is located at two adjacent sides of the boundary
% of Omega, that we denote by Gamma_1.

% The control problem reads as follows: given T>0 and the initial data (u^0,u^1)
% in L^2(Omega)× H^(-1)(Omega), find v(x,t) in L^2(Gamma_1 x(0,T)) such
% that the solution u of the constant coefficient 2-D wave system:
%           u_(tt)- Laplacian (u) =0    in Omega x(0,T)
%           u(x,t)=0                    on Gamma_0 = Gamma\Gamma_1, 0<t<T
%           u(x,t)=v(x,t)               on Gamma_1, 0<t<T
%           u(x,0)=u^0(x),      u_t (x,0)=u^1(x)    in Omega
% satisfies
%           u(x,T)=u_t (x,T)=0,     x in Omega.

% Parameters of entry:
% a = left wing of the interval
% b = right wing of the interval
% J, J2 = number of interior points in the variable x
% mu = number of courant
% T = final time 
% epstest = tolerance
% U01= final position
% U11= final speed

% Parameters of exit:
% controlex = control of problem
% Test = norm of the solutions
% temps = final time in the step, temps=n*dt
% ek01fg =  data e^0_0 in step k
% ek11fg =  data e^1_0 in step k      

function [controlex,Test,temps,ek01fg,ek11fg]=cont_bigrid2d(a,b,J,mu,T,epstest,U01,U11)
format long;

% h, h2 = distance between two consecutive points (space)
% x,y = spatial coordinates of the nodes
% limite = condition of stop, maximum number of iterations
% dt = distance between two consecutive points (time)
% N = number of points in the temporary variable

%-------------------------------------------------------------------------
% DIVERS PARAMETERS 
%-------------------------------------------------------------------------

%********************* test d'arret du gradient **************************

%echelle=5.;
PAUSE=0.001;
limite = 100;

%-------------------------------------------------------------------------
% PARAMETRIZE FOR THE MESHING
%-------------------------------------------------------------------------

h = 1/(J+1);
x = 0:h:1;
y = x;

[X,Y] = meshgrid(x,y);
Y=flipud(Y);
G = numgrid('S',J+2);

J2 = (J-1)/2;
h2 = 1/(J2+1);
x2 = 0:h2:1;
y2 = x2;

[X2,Y2] = meshgrid(x2,y2);
Y2 = flipud(Y2);
G2 = numgrid('S',J2+2);


%-------------------------------------------------------------------------
% CONDITION C.F.L. OF THE SCHEME ( 2,2 ) RESOLVING THE SYSTEM 
%-------------------------------------------------------------------------

dt = mu*h;

%-------------------------------------------------------------------------
% The TIME T to which the system must be stabilized
%-------------------------------------------------------------------------

N = round(T/dt);
T=N*dt;

r0 = (dt/h)^2;
time1=cputime;

%--------------------------------------------------------------------------
% RESOLUTION FOR PHI_0 OF THE EQUATION 
%       (d^2/dt^2 - Laplacian )phi_0 =0     in Omega x(0,T)
%       phi_0=0                             on Gamma x(0,T)
%       phi_0(0)=e^0_0,     (d/dt)phi_0(0)=e^1_0    in Omega.  
% WITH ONE CONDITIONS OF EDGE INVALID AND INITIALIZED BY 
%       phi_0(t=0)=0     and    (d/dt)phi_0(t=0)=0
%--------------------------------------------------------------------------

[M1] = matr2d(G,J,r0);
ek01 = zeros(J2+2);
ek11 = ek01;

% Interpolation of ekii for the calculation of phi using the instruction of matlab interp2

ek01fg = interp2(X2,Y2,ek01,X,Y);
ek11fg = interp2(X2,Y2,ek11,X,Y);


[phik1N,phik1Np1] = forward2d(X,Y,G,J,dt,N,M1,ek01fg,ek11fg);
          
%---------------------------------------------------------------------------
% RESOLUTION FOR PSI_0 OF THE EQUATION 
%       (d^2/dt^2 - Laplacian )psi_0 =0     in Omega x(0,T)
%       psi_0= (d/dn) phi_0                 on Gamma_1 x(0,T)
%       psi_0(T)=0,     (d/dt)psi_0(T)=0    in Omega.  
%---------------------------------------------------------------------------

%*********************** Case n=N == > calculation of psi_0 (N-1)***********

%**********************************
% Calculation of psi_0 in time N  *
%**********************************

[c1] = controle2d(phik1N,h,J,G,1);
double(c1);

%***********************************
% Calculation of psi_0 in time N-1 *
%***********************************

[bc1] = bdycond2d(c1,X,Y,G,r0,h,J);
double(bc1);
psik1Nm1 = bc1/2;

phik1np2 = phik1Np1; phik1np1 = phik1N; 
psik1np1 = zeros(J^2,1); 
psik1n = psik1Nm1; 

for n = N-1:-1:0

%*********************** Case n<N ==> calculation of psi_0 (n-1)************

%*********************************
% Calculation of phi_0 in time n *
%*********************************

[phik1n] = phiback2d(n,dt,J,G,M1,phik1np2,phik1np1);

%**********************************
% Calculation of psi_0 in time n-1 *
%**********************************

[c1] = controle2d(phik1n,h,J,G,1);
[bc1] = bdycond2d(c1,X,Y,G,r0,h,J);
[psik1nm1] = psiback2d(M1,bc1,psik1np1,psik1n);

%************************************************
% Preparation of the next passage in the buckle *
%************************************************

phik1np2 = phik1np1; phik1np1=phik1n;
psik1np1 = psik1n; psik1n = psik1nm1;

if n==1

% Saving of psi in time 1 for the calculation of (d/dt)psi(t=0)

  psik11 = psik1np1;

end %if

end %for

%------------------------------------------------------------------------
% Calculation of residues g0 and g1
%------------------------------------------------------------------------

smbre1 = (h2^2)*((psik11-psik1n)/(2*dt) - U11(G>0)) ;

% Injection of the second member on the meshing G2

smbre1cg = injecte(smbre1,G,J);

% Injection of psi in time t=0 on the meshing G2

psik1np1cg = injecte(psik1np1,G,J);

% Injection of U01 and U02 on the meshing G2

U01cg = injecte(U01(G>0),G,J);

D = delsq(G);
D2 = delsq(G2);

gk01 = D2\smbre1cg;

%gk11 = U01 - psik1np1;
%gk12 = U02 - psik2np1;

% Put under matrix shape of g0 and g1

Gk01 = zeros(J2+2);
Gk01(G2>0) = full(gk01(G2(G2>0)));

Gk11 = zeros(J2+2);
Gk11(G2>0) = full(U01cg(G2(G2>0))-psik1np1cg(G2(G2>0)));

% Norm of (g0,g1)
normg0 = sqrt( prosca2d(Gk01,Gk11,Gk01,Gk11,x2,J2,h2,G2,X2,Y2) );
normgk = normg0;

%---------------------------------------------------
% Calculation of the new direction of descent
%---------------------------------------------------

Wk01=Gk01; Wk11=Gk11;

test = normg0^2/(normel22d(U01,J,h)^2+normehm12d(U11(G>0),D,G,J,x,y,h)^2);

passage = 0;
Test = test;

while (test > epstest) & (passage<limite)

%**************************************************************************
%**************************************************************************
%**									 **
%**				STAGE 1					 **
%**									 **
%**		       	DESCENT					 **
%**									 **
%**************************************************************************
%**************************************************************************



%--------------------------------------------------------------------------
% RESOLUTION FOR PHI_k OF THE EQUATION 
%       (d^2/dt^2 - Laplacian )phi_k =0     in Omega x(0,T)
%       phi_k=0                             on Gamma x(0,T)
%       phi_k(0)=w^0_k,     (d/dt)phi_k(0)=w^1_k    in Omega.  
%--------------------------------------------------------------------------

Wk01fg = interp2(X2,Y2,Wk01,X,Y);
Wk11fg = interp2(X2,Y2,Wk11,X,Y);
[phibk1N,phibk1Np1] = forward2d(X,Y,G,J,dt,N,M1,Wk01fg,Wk11fg);

%---------------------------------------------------------------------------
% RESOLUTION FOR PSI_k OF THE EQUATION 
%       (d^2/dt^2 - Laplacian )psi_k =0     in Omega x(0,T)
%       psi_k= (d/dn) phi_k                 on Gamma_1 x(0,T)
%       psi_k(T)=0,     (d/dt)psi_k(T)=0    in Omega.  
%---------------------------------------------------------------------------

%*********************** Case n=N ==> calculation of psi_k(N-1)**************

%*********************************
% Calculation of psi_k in time N *
%*********************************

[c1] = controle2d(phibk1N,h,J,G,1);

%***********************************
% Calculation of psi_k in time N-1 *
%***********************************

[bc1] = bdycond2d(c1,X,Y,G,r0,h,J);
psibk1Nm1 = bc1/2;

phibk1np2 = phibk1Np1; phibk1np1 = phibk1N; 
psibk1np1 = zeros(J^2,1); psibk1n = psibk1Nm1; 

for n = N-1:-1:0

%*********************** case n<N ==> calculation of psi_k(n-1)************

%*********************************
% Calculation of phi_k in time n *
%*********************************

[phibk1n] = phiback2d(n,dt,J,G,M1,phibk1np2,phibk1np1);

%***********************************
% Calculation of psi_k in time n-1 *
%***********************************

[c1] = controle2d(phibk1n,h,J,G,1);

[bc1] = bdycond2d(c1,X,Y,G,r0,h,J);

[psibk1nm1] = psiback2d(M1,bc1,psibk1np1,psibk1n);

%************************************************
% Preparation of the next passage in the buckle *
%************************************************

phibk1np2 = phibk1np1; phibk1np1=phibk1n;
psibk1np1 = psibk1n; psibk1n = psibk1nm1;

if n==1

% Saving of psi in time 1 for the calculation of (d/dt)psi(t=0)

  psibk11 = psibk1np1;

end %if
end %for

%------------------------------------------------------------------------
% Calculation of residues g0 and g1
%------------------------------------------------------------------------

smbre1 = (h2)^2*(psibk11-psibk1n)/(2*dt);

% Injection of the second member on the meshing G2
smbre1cg = injecte(smbre1,G,J);

% Injection of psi in time t=0 on the meshing G2
psibk1np1cg = injecte(psibk1np1,G,J);
gbk01 = D2\smbre1cg;

% Put under matrix shape with the values at the edge of the domain

Gbk01 = zeros(J2+2);
Gbk01(G2>0) = full(gbk01(G2(G2>0)));

Gbk11 = zeros(J2+2);
Gbk11(G2>0) = full(-psibk1np1cg(G2(G2>0)));

ps = prosca2d(Gbk01,Gbk11,Wk01,Wk11,x2,J2,h2,G2,X2,Y2);
rhok = normgk^2/ps;

%----------------------------------------------------------------
% Updating of variables for the next passage in the buckle
%----------------------------------------------------------------

% update of e^k
ek01 = ek01 - rhok*Wk01;
ek11 = ek11 - rhok*Wk11;

% update of g^k
Gk01 = Gk01 - rhok*Gbk01;
Gk11 = Gk11 - rhok*Gbk11;

%**************************************************************************
%**************************************************************************
%**									 **                                     
%**				STAGE 2					     **
%**									 **
%**		       	CONVERGENCE					 **
%**									 **
%**************************************************************************
%**************************************************************************

normgkp1 = sqrt( prosca2d(Gk01,Gk11,Gk01,Gk11,x2,J2,h2,G2,X2,Y2) );

test = ( normgkp1/normg0 )^2;
Test=[Test;test];

gammak = ( normgkp1/normgk )^2;

Wk01 = Gk01 + gammak*Wk01;
Wk11 = Gk11 + gammak*Wk11;

normgk = normgkp1;

passage = passage+1;
disp('***********************************************');
disp(sprintf('iteration of gradient = %g',passage));
disp(sprintf('error (norm) = %g',test));
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
%**				CONTROL					 **
%**									 **
%**************************************************************************
%**************************************************************************

ek01fg = interp2(X2,Y2,ek01,X,Y);
ek11fg = interp2(X2,Y2,ek11,X,Y);
[phik1N,phik1Np1] = forward2d(X,Y,G,J,dt,N,M1,ek01fg,ek11fg);

%---------------------------------------------------------------------------
% RESOLUTION FOR PSI_k OF THE EQUATION 
%       (d^2/dt^2 - Laplacian )psi_k =0     in Omega x(0,T)
%       psi_k= (d/dn) phi_k                 on Gamma_1 x(0,T)
%       psi_k(T)=0,     (d/dt)psi_k(T)=0    in Omega.  
%---------------------------------------------------------------------------

%*********************** case n=N ==> calculation of psi_k(N-1)**************

%*********************************
% Calculation of psi_k in time N *
%*********************************

[c1] = controle2d(phik1N,h,J,G,1);

%****************************************
% Calculation of the norm L2 of control	*
%****************************************

normecontr = nl2domeg2d(c1,X,Y,J,h);
temps = N*dt;

%***********************************
% Calculation of psi_k in time N-1 *
%***********************************

[bc1] = bdycond2d(c1,X,Y,G,r0,h,J);
psik1Nm1 = bc1/2;

phik1np2 = phik1Np1; phik1np1 = phik1N; 
psik1np1 = zeros(J^2,1); psik1n = psik1Nm1; 

for n = N-1:-1:0

%*********************** case n<N ==> calculation of psi_k(n-1)**********

%*********************************
% Calculation of phi_k in time n *
%*********************************

[phik1n] = phiback2d(n,dt,J,G,M1,phik1np2,phik1np1);

%***********************************
% Calculation of psi_k in time n-1 *
%***********************************

[c1] = controle2d(phik1n,h,J,G,1);

%****************************************
% Calculation of the norm L2 of control *
%****************************************

normecontr = [normecontr;nl2domeg2d(c1,X,Y,J,h)];
temps = [temps;n*dt];

[bc1] = bdycond2d(c1,X,Y,G,r0,h,J);

[psik1nm1] = psiback2d(M1,bc1,psik1np1,psik1n);

%************************************************
% Preparation of the next passage in the buckle * 
%************************************************

phik1np2 = phik1np1; phik1np1=phik1n;
psik1np1 = psik1n; psik1n = psik1nm1;

if n==1

% Saving of psi in time 1 for the calculation of (d/dt)psi(t=0)

  psik11 = psik1np1;

end %if

end %for

time2=cputime-time1;

disp(sprintf('CPUTIME = %g second(s)', time2));

controlex=normecontr;

%end





