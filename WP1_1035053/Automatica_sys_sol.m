%solves the system x'=Ax+bu on [0,T] with datum x0
%nt is the discretisation step of the time interval
function x=sys_sol(x0,T,nt,A,b,u)
x=zeros(size(x0,1),nt+1);
x(:,1)=x0;
dt2=T/(2*nt);
R=speye(size(A))-dt2*A;
M=speye(size(A))+dt2*A;
B=dt2*b;
for k=1:nt,
    x(:,k+1)=R\(M*x(:,k)+B*(u(k)+u(k+1)));
end
