function [K] = grdivK(G)

[m,n] = size(G);

% Constitution of the diagonals of A, B  
p = find(G);
ia = G(p);
ja = ia;
sa = 8.*ones(length(p),1);

% for k = [nord sud ]
for k = [-1 1 -m m]
   Q = G(p+k);
   q = find(Q);
   ia = [ia;G(p(q))];
   ja = [ja;Q(q)];
   sa = [sa;-ones(length(q),1)];
end   

for k = [-m-1 -m+1 m-1 m+1]
   Q = G(p+k);
   q = find(Q);
   ia = [ia;G(p(q))];
   ja = [ja;Q(q)];
   sa = [sa;-ones(length(q),1)];
end

K = sparse(ia,ja,sa);
K = -K/3.;



