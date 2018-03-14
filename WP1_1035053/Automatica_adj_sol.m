%solves the adjoint problem p'=-A'p on [0,T] with datum p(T)=phi
%nt is the discretisation step of the time interval

function p=adj_sol(phi,T,nt,A)
p=zeros(size(phi,1),nt+1);
p(:,nt+1)=phi;
dt2=T/(2*nt);
R=speye(size(A))-dt2*A';
M=speye(size(A))+dt2*A';
for k=nt:-1:1
    p(:,k)=R\(M*p(:,k+1));
end
