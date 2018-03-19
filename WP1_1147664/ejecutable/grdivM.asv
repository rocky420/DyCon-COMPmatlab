function [M] = grdivM(G)

[m,n] = size(G);

% Constitution of the diagonals of A, B  
p = find(G);
ia = G(p);
ja = ia;
sa = 4*ones(length(p),1);

% for k = [nord sud ]
for k = [-m -1 1 m ]
   Q = G(p+k);
   q = find(Q);
   ia = [ia;G(p(q))];
   ja = [ja;Q(q)];
   sa = [sa;2*ones(length(q),1)];
end   

for k = [-m-1 -m+1 m-1 m+1]
   Q = G(p+k);
   q = find(Q);
   ia = [ia;G(p(q))];
   ja = [ja;Q(q)];
   sa = [sa;ones(length(q),1)];
end

M = sparse(ia,ja,sa);
M = M/16;



