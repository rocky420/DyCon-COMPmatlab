%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%                                                                   %%%%
%%%% Localization along rays and propagation of the solution to the    %%%%
%%%% fractional wave equation                                          %%%%
%%%%                                                                   %%%%
%%%% iu_t + (-d_x^2)^s u = 0,            (x,t) in (-L,L)x(0,T)         %%%%
%%%% u = 0,                              (x,t) in [R\(-L,L)]x(0,T)     %%%%
%%%% u(x,0) = u_0(x),                     x in (-L,L)                  %%%%
%%%%                                                                   %%%%
%%%% U. Biccari, April 2017                                            %%%%
%%%% v. 0.0                                                            %%%%
%%%%                                                                   %%%% 
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

function rays_fr_schr_cn(s,L,Nx,T,fr)

%%%% s = power of the fractional Laplacian.
%%%% L = size of the space interval.
%%%% Nx = number of points in the space mesh.
%%%% T = size of the time interval.
%%%% fr = oscillation frequency of the intial datum.

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%
%%%% Definition of the meshes in space and time, and of the rigidity and 
%%%% mass matrices
%%%% 
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

hx = (2*L)/(Nx+1);
mu = 0.1;
ht = hx*mu; % CFL coefficient
t = 0:ht:T;
y = -L:hx:L;
ly = length(y);
lt = length(t);
gamma = hx^(-0.9);
[T,Y] = meshgrid(t,y);

S = fl_rigidity_sym(s,L,ly-2);

M = (2/3)*eye(ly-2);
for i = 2:ly-3
    M(i,i+1) = 1/6;
    M(i,i-1) = 1/6;
end
M(1,2) = 1/6;
M(ly-2,ly-3) = 1/6;
M = hx*M;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%
%%%% Data starting at point y0=0 and oscilating at frequency 
%%%% fr1=2pi^2 and fr2=pi^2/16
%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

y0 = 0;

data = exp(-0.5*gamma*(y(2:end-1)-y0).^2).*exp(1i*fr*y(2:end-1)/hx);

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%
%%%% Resolution of the Schrodinger equation by the Crank-Nicholson scheme
%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

B1 = M + 1i*0.5*ht*S;
B2 = M - 1i*0.5*ht*S;

C = B1\B2;

sol = zeros(ly-2,lt);
sol(:,1) = data';
for j = 2:lt
    sol(:,j) = C*sol(:,j-1);
end

sol = abs(sol);
sol = [zeros(1,length(t));sol;zeros(1,length(t))];

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%
%%%% Plots and videos
%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

sg = num2str(10*s);
Ls = num2str(L);
frg = num2str(fr);

vstring = strcat('rays_frac_schrodinger','_0',sg,'_',Ls);

figure(1)
rays_fr_schr_video = VideoWriter(vstring);
rays_fr_schr_video.FrameRate = 5;
rays_fr_schr_video.Quality = 100;
open(rays_fr_schr_video);
pause
for j = 1:50:lt
    Sol = zeros(size(sol));
    Sol(:,1:j) = sol(:,1:j);
    mesh(Y,T,Sol,'LineWidth',3)
    axis([-L L 0 5 0 2])
    caxis([0 2])
    set(gca,'XTick',[-L 0 L],'XTickLabels',{'y=-1' '0' '1'},...
                                            'fontsize',10,'fontweight','n')
    set(gca,'YTick',[0 5],'YTickLabels',{'t=0' '5'},...
                                            'fontsize',10,'fontweight','n')
    view(0,90)
    title(['Freq. = ',frg,'s = ',sg,' t = ', num2str(t(j))], ...
           'fontsize',10,'fontweight','n')
                  
    fig(j) = getframe(gcf);
    writeVideo(rays_fr_schr_video,fig(j));
end
close(rays_fr_schr_video);

function A = fl_rigidity_sym(s,L,N)

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%                                                                   %%%%
%%%% Compute the rigidity matrix for the FE discretization of the      %%%%
%%%% fractional Laplacian (-d-x^2)^s on (-L,L).                        %%%% 
%%%%                                                                   %%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

close all

x = linspace(-L,L,N+2);
x = x(2:end-1);
h = x(2)-x(1);
A = zeros(N,N);

% Normalization constant of the fractional Laplacian
c = (s*2^(2*s-1)*gamma(0.5*(1+2*s)))/(sqrt(pi)*gamma(1-s)); 

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%
%%%% Elements A(i,j) with |j-i|>1
%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

for i=1:N-2
    for j=i+2:N
        k = j-i;
        if s==0.5 && k==2
                A(i,j) = 56*log(2)-36*log(3);           
        elseif s==0.5 && k~=2
            A(i,j) = -(4*((k+1)^2)*log(k+1)+4*((k-1)^2)*log(k-1)...
                -6*(k^2)*log(k)-((k+2)^2)*log(k+2)-((k-2)^2)*log(k-2));
        else
            P = 1/(4*s*(1-2*s)*(1-s)*(3-2*s));
            q = 3-2*s;
            B = P*(4*(k+1)^q+4*(k-1)^q-6*k^q-(k-2)^q-(k+2)^q);
            A(i,j) = -2*h^(1-2*s)*B;
        end       
    end
end

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%
%%%% Elements of A(i,j) with j=1+1 ----- upper diagonal
%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

for i=1:N-1
    if s==0.5
       A(i,i+1) = 9*log(3)-16*log(2);
    else 
       A(i,i+1) = h^(1-2*s)*((3^(3-2*s)-2^(5-2*s)+7)...
                               /(2*s*(1-2*s)*(1-s)*(3-2*s))); 
    end    
end

A = A+A';

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%
%%%% Elements on the diagonal
%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

for i=1:N
    if s==0.5
       A(i,i) = 8*log(2);
    else 
       A(i,i) = h^(1-2*s)*((2^(3-2*s)-4)/(s*(1-2*s)*(1-s)*(3-2*s)));
    end
end

A = c*A; 