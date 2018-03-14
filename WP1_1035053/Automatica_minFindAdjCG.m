
%finding minimisator associated to the adjoint problem of the orig. control problem x'+Ax=Bu
% by using conj. gradient method
%the minimisator satisfies the system  Gq =rhs, where G- Gramiam, rhs=xf-  e(-TA)xi

function q=minFindAdjCG(xi,xf,T,nt,A,B,eps,qini)
%xi -initial data,
%xf - final target
%T-target time
%nt -# of discretisation steps in time interval
%eps -precision
%qini - initial guess of the solution

N=size(xi,1); %diemnsion of the system
x=sys_sol(xi,T,nt,-A, zeros(N,1), zeros(1,nt+1)); %solves the original problem in order to find find e(-TA)xi
rhs=xf-x(:,nt+1);
nb=norm(rhs); 
if nb==0, nb=1; end

%Finding G*qini
q=qini;
p_q=adj_sol(q,T,nt,-A); %p- solution of the adjoint problem
u_q=B'*p_q;
x_q=sys_sol(zeros(N,1),T,nt,-A, B, u_q); %x- solution of the original problem
Gq=x_q(:,nt+1);

M_inv=eye(N);%preconditioning matrix M_inv, symmetric, posit. def.
r=rhs-Gq; %residual r_0
z=M_inv*r; %if no preconditioning, z =r
h=z; % h stands for the next direction of the method
z_=z;
r_=r;
ng_=r'*r; %error norm
k=0;
nitermax=min(1000,size(xi,1)^2);
while k<nitermax && ng_>eps^2,
    %Finding G*h
    p_h=adj_sol(h,T,nt,-A);
    u_h=B'*p_h;
    x_h=sys_sol(zeros(N,1),T,nt,-A, B, u_h);
    Gh=x_h(:,nt+1);
    alpha=(r'*z)/(h'*Gh);
    q=q+alpha*h; %finding (k+1). aproximation
    r=r-alpha*Gh;  %next residual r_(k+1)
    z=M_inv*r;
    beta=z'*r/(z_'*r_);
    h=z+beta*h; % finding the next direction of the method
    ng=r'*r;
    ng_=ng;
    z_=z; %store the residual for the next iteration
    r_=r;
    k=k+1;
end

if 1%check the error Gq-rhs
    p_q=adj_sol(q,T,nt,-A);
    u_q=B'*p_q;
    x_q=sys_sol(zeros(N,1),T,nt,-A, B, u_q);
    Gq=x_q(:,nt+1);
    err=norm(Gq-rhs); %it corresponds to deviation of the solution at time T from the target: |x(T)-xf|
    fprintf(['minFindAdj:: number of iteration reached:', num2str(k),'\n error: ', num2str(err),'\n']);
end
if k>=nitermax,
    fprintf(['minFindAdj:: maximal number of iteration reached, error: \n',num2str(ng)]);
end
end

