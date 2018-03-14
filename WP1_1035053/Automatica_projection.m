%provides the orthogonal projection of a vector v to the space spanned by
%columns of matrix B

function  [y]=projection(v,B)
g=orth(B);  %gram-schmidt orthogonalisation
m=size(g,1);
n=size(g,2);

y=zeros(m,1);
%calculation of the projection
for j=1:1:n
    y=y+dot(v,g(:,j))*g(:,j);
end

end