%% initiation

clear f A B y par_greedy sigma G G_nu_phi0 rhs phi0_sel nu_sel;
N=20; %system dimension
k=100; %discretisation constant of a parameter set

x0=zeros(N,1); %initiation of the initial condition

if 0 %wave eq. setting
    cc=1; %example number
    nt=10*N;  %diskretisatin of the time interval
    a=1; b=10; %parameter interval
    d_nu=(b-a)/k;
    nu=a:d_nu:b;
    n= size(nu,2)-1;
    T=3; %target time
    epsil=0.5; % greedy control error
    %system matrix
    M=zeros(N/2);%N should be even
    I=eye(N/2);
    A_pom=2*eye(N/2);
    for i=1:1:N/2-1
        A_pom(i,i+1)=-1;
        A_pom(i+1,i)=-1;
    end
    A = zeros(N,N,n+1);
    for l=1:1:n+1
        A(:,:,l)=[M -I;  nu(l)*((N/2+1)^2)*A_pom  M];
    end
    %control operator
    B=zeros(N-1,1);
    B(N)=1*(N+1)^2;
    %initial condition
    for i=1:1:N/2
        x0(i)=1*sin(pi*(i)/(N/2+1));
    end
end

if 1 %heat eq. setting
    cc=2; %example number
    nt=30*N;  %diskretisatin of the time interval
    a=1; b=2; %parameter interval
    d_nu=(b-a)/k;
    nu=a:d_nu:b;
    T=0.1; %target time
    epsil=0.0001; %greedy control error
    %system matrix
    A = zeros(N,N,n+1);
    A_pom=2*eye(N);
    for i=1:1:N-1
        A_pom(i,i+1)=-1;
        A_pom(i+1,i)=-1;
    end
    for l=1:1:n+1
        A(:,:,l)=nu(l)*((N+1)^2)*A_pom;
    end
    %control operator
    B=zeros(N-1,1);
    B(N)=1*(N+1)^2;
    %initial condition
    for i=1:1:N
        x0(i)=1*sin(pi*(i)/(N+1));
    end
end

x1=0*ones(N,1); %target state

%% greedy control algorithm - offline part

k=N; %max. # of iterations
nu_iter=nu;

%Choosing the first parameter
y = zeros(k+1,1);
%calculation of free dynamics for all parameter values
for l=1:1:(k+1)
    x=sys_sol(x0,T,nt,-A(:,:,l), zeros(N,1), zeros(1,nt+1));
    rhs(:,l)=x1-x(:,nt+1);
    y(l)=norm(rhs(:,l)); %error in the first step
    if y(l)<epsil
        nu_iter(l)=0;
    end
end
%removing those parameter values for which we have already obtained
%aprroximation within a given error from further calculations
for l=size(nu_iter,2):-1:1
    if  nu_iter(l)==0
        nu_iter(l)=[];
    end
end
%selection of the first parameter
par_greedy(1)=argmax(y);
nu_sel(1)=nu(par_greedy(1));

%Choosing subsequent parameters
m=1; sigma(1)=2;
while m<k+1 && sigma(max(1,m-1))>epsil % in each iteration one parameter is chosen
    phi0_sel(:,m)=minFindAdjCG(x0,x1,T,nt,A(:,:,par_greedy(m)),B,0.00001,zeros(N,1)); %construction of  the minimisator corresponding to the parameter chosen in the previous iteration
    nu_iter=nu;
    clear proj
    
    for l=1:1:k+1
        %calculation of G_nu \phi0 for every \nu
        if l==par_greedy(m)
            G_nu_phi0(:,m,l)=rhs(:,l);
        else
            p=adj_sol(phi0_sel(:,m),T,nt,-A(:,:,l));
            u=B'*p;
            x=sys_sol(zeros(N,1),T,nt,-A(:,:,l), B, u);
            G_nu_phi0(:,m,l)=x(:,nt+1);
        end;
        %calculation of the error in the m-th step
        proj(:,l)=projection(rhs(:,l),G_nu_phi0(:,:,l));
        y(l)=norm(rhs(:,l)- proj(:,l));
        if y(l)<epsil
            nu_iter(l)=0;
        end
    end;
    %removing those parameter values for which we have already obtained
    %aprroximation within a given error from further calculations
    for l=size(nu_iter,2):-1:1
        if  nu_iter(l)==0
            nu_iter(l)=[];
        end
    end
    [par_greedy(m+1), sigma(m)]=argmax(y);
    nu_sel(m+1)=nu(par_greedy(m+1)); %selection of the next parametar
    
    m=m+1
end
m=m-1;%m represents the number of chosen parameters
par_greedy(m+1)=[];
nu_sel(m+1)=[];

savefile = 'data.mat';
save(savefile, 'cc','epsil', 'A' , 'B', 'x0', 'x1', 'T', 'nt','a', 'b', 'n', 'sigma','phi0_sel', 'par_greedy', 'proj', 'G_nu_phi0', 'nu_sel','nu','rhs' );

%% graphical part

figure;
%plot of greedy approximation rates
subplot(2,1,1);
pom=1:1:size(sigma,2);
p=plot(pom,sigma);
set(p,'Color','red')
title(['Greedy approximation rates    \newline N=',num2str(N),', n=',num2str(n),', T=',num2str(T),', nt=',num2str(nt),', \epsilon=',num2str(epsil)])
xlabel('Iteration #','Fontsize',14);

%plot of selected paramters
subplot(2,1,2);
plot(nu_sel,'-s');
title(['parameter choice from [',num2str(a),',',num2str(b),']']);
xlabel('Iteration #','Fontsize',14);





