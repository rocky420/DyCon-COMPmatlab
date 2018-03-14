%% initiation

load data.mat; %loading of the data obtained in the offline part
clear A_nu B_nu Lambda_nu_phi0  elem j elem_sel;
k=size(nu_sel,2);
N=size(x0,1);
nu_online=input(['Choose a value of the parameter between ',num2str(a),' and ',num2str(b), ': '] );

    
if cc == 1 %System corresp. to the wave eq.
    M=zeros(N/2);
    I=eye(N/2);
    A_pom=2*eye(N/2);
        for i=1:1:N/2-1
        A_pom(i,i+1)=-1;
        A_pom(i+1,i)=-1;
    end
    A_nu=[M -I;  nu*((N/2+1)^2)*A_pom  M];
    B=zeros(N-1,1); %control operator
    B(N)=1*(N/2+1)^2;
end
 
 if cc == 2 %System corresp. to the heat eq.
     A_nu=2*eye(N);
     for i=1:1:N-1
         A_nu(i,i+1)=-1;
         A_nu(i+1,i)=-1;
     end
     A_nu=nu_online*((N+1)^2)*A_nu;
     B=zeros(N-1,1); %control operator
     B(N)=1*(N+1)^2;
 end
    
 %% greedy control algorithm - online part
 
 % calculating Lambda_\nu \phi_nu (free dynamics)
 if element(nu_online, nu)==1 %if the given param. value belongs to the disretised parameter set
     [elem,j]=element(nu_online, nu);
     rhs_nu=rhs(:,j); %free dynamics of the system is already calculated in the offline part
 else
     x=sys_sol(x0,T,nt,-A_nu, zeros(N,1), zeros(1,nt+1));%otherwise we calculate free dynamics of the system corresponding to given parameter value
     rhs_nu=x1-x(:,nt+1);
 end
            
 j_sel=0;
 if element(nu_online, nu_sel)==1 %if the given param. value belongs to the set of chosen  snapshots
     [elem_sel,j_sel]=element(nu_online, nu_sel);
 end
 
 % calculating Lambda_\nu \phi_i^0
 for m=1:1:k 
     if m==j_sel 
         Lambda_nu_phi0(:,m)=rhs_nu;
     else
         p=adj_sol(phi0_sel(:,m),T,nt,-A_nu);
         u=B'*p;
         x=sys_sol(zeros(N,1),T,nt,-A_nu, B, u);
         Lambda_nu_phi0(:,m)=x(:,nt+1); %Lambda je isto sto i G gori
     end
 end
 
 %projection
 proj_nu=projection(rhs_nu,Lambda_nu_phi0); %racunam ortog. projekc. desne strane na aproks. protor
 alpha_nu=Lambda_nu_phi0\proj_nu;
 

%construction of the greedy control
phi0=zeros(N,1);
for i=1:1:k
    phi0=phi0+alpha_nu(i)*phi0_sel(:,i);
end
p=adj_sol(phi0,T,nt,-A_nu);
u=B'*p;

%approximation error
x=sys_sol(x0,T,nt,-A_nu, B, u);
error=norm(x1-x(:,nt+1));
fprintf(['The error for nu=',num2str(nu_online),'\n |x(', num2str(T),')|=', num2str(error),'\n']);




%% graphical part
t = linspace(0,T,nt+1);

figure;
subplot(2,1,1);
set(gcf,'DefaultAxesColorOrder',[1 0 0; 0 1 0; 0 0 1;1 0 1;0 0 0]) %red green blue yellow black
lc=N-4; uc=N; %choose the components of the system to be plotted, lc - the lowest comp. to be plotted, uc the most upper one
for i=lc:1:uc
    plot(t,x(i,:));
    hold all;
end
title(['x_{',num2str(lc),'}(t) - x_{',num2str(uc),'}(t)'],'Fontsize',15);
xlabel('t','Fontsize',14);
hold off;
subplot(2,1,2);
set(gcf,'DefaultAxesColorOrder',[1 0 0]) %  red
plot(t,u);
title(['control for \nu=',num2str(nu_online)],'Fontsize',15);
xlabel('t','Fontsize',14);


if cc==1
    %3d plot - wave eq.
    figure;
    y=0:1/(N/2+1):1;%diskretisation of the domain [0,1]
    sol=zeros(N/2+2,nt+1); %zero initiation
    for i=2:N/2+1
        sol(i,:)=x(i-1,:);
    end
    sol(N/2+2,:)=u;
    mesh(y',t',sol','linewidth',2);
    title(['v(t, x)'],'Fontsize',15);
    xlabel('x','Fontname','Space variable','Fontsize',14,'Fontweight','b');
    ylabel('t','Fontname','Time variable','Fontsize',14,'Fontweight','b');
end

if cc==2
    %3d plot - heat eq.
    figure;
    y=0:1/(N+1):1;%diskretisation of the domain [0,1]
    sol=zeros(N+2,nt+1); %zero initiation
    for i=2:N+1
        sol(i,:)=x(i-1,:);
    end
    sol(N+2,:)=u;
    mesh(y',t',sol','linewidth',2);
    title(['v(t, x)'],'Fontsize',15);
    xlabel('x','Fontname','Space variable','Fontsize',14,'Fontweight','b');
    ylabel('t','Fontname','Time variable','Fontsize',14,'Fontweight','b');
end



