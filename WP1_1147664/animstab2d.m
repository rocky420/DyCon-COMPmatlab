function sol=animstab2d(a,b,J,mu,T,coeffdamp,dampband,viscos,U01,U11,axes1,axes3,axes2)



format long;


% mov = avifile('movie1.avi')
disp('|-------------------------------------------------------------------------|')
disp('|                                                                         |')
disp('|                           Stabilization 2D                              |')
disp('|                                                                         |')
disp('|-------------------------------------------------------------------------|')

PAUSE=1e-20;
h = 1/(J+1);
x = a:h:b;
y=x; 
 
[X,Y] = meshgrid(x,y);
Y=flipud(Y);
G = numgrid('S',J+2);
G1=G;
p=ceil((J-1)*dampband);
G1(p+2:J+1,1:J+1-p)=0;

dt=mu*h;

if viscos ~=0.
    viscos=1.;
end

%-------------------------------------------------------------------------
% TIME T to which the system owes etre stabilized
%-------------------------------------------------------------------------
%figure(1)

N = ceil(T/dt);
temps=0:dt:T;

r0 = (dt/h)^2;

[M1,M2,M3] = matrstab2d(G,G1,J,r0,dt,coeffdamp,viscos);

maximo=max(max(U01));
minimo=min(min(U01));
maxi=max(abs(maximo),abs(minimo));

u1 = U01;
du1 = U11;
Y1nm1 = u1;
Y1nm1 = Y1nm1(G>0);
du1 = du1(G>0);

Y1n = Y1nm1 + dt*du1;


axe = [a b a b -maxi maxi];
%axes(axesol);
n=0;
totnm1=G;
totnm1(G>0)=full(Y1nm1(G(G>0)));
%mesh(X,Y,totnm1);

%axis(axe);
%text= ['Position at time t=', num2str((n*dt))];
%title(text);
%pause(PAUSE);

n=1;
totn=G;
totn(G>0)=full(Y1n(G(G>0)));
reset(GCF);
%mesh(X,Y,totn);
%axis(axe);
%text= ['Position at time t=', num2str((n*dt))];
%title(text);

%pause(PAUSE);

%-------------------------------------------------------------
% Buckle in time
%-------------------------------------------------------------
for n = 2:N 

  %******************** Calculation of Y1(n+1) *********************
  Y1np1 = M1\(M2*Y1n + M3*Y1nm1) ;
  
  % Preparation of the next passage in the buckle
  Y1nm1 = Y1n; Y1n = Y1np1;
  totnp1=G;
  totnp1(G>0)=full(Y1np1(G(G>0)));
  reset(GCF);
  
  axes(axes1);

  mesh(X,Y,totnp1);
%  colormap hot
  axis(axe);
  text= ['Position at time t=', num2str((n*dt))];
  title(text);
  pause(PAUSE);
  
  axes(axes3);
  mesh(X,Y,totnp1);
  view(-60,5)
%  colormap hot
  axis(axe);
  text= ['Position at time t=', num2str((n*dt))];
  title(text);
  pause(PAUSE);
  totnm1=totn;
  totn=totnp1;    
%       F = getframe(gca);
%   	mov = addframe(mov,F);
  axes(axes2);
  spy(G1);

end

sol=1;
%  mov = close(mov); 
%end
