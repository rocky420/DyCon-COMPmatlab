function [A,B] = grdiv(G)

[m,n] = size(G);

% Constitution des diagonales de A,B et C
p = find(G);
ia = G(p);
ja = ia;

ib = ia; jb = ja;

sa = -2*ones(length(p),1);
sb = sa;
sc = -zeros(length(p),1);

% Constitution des sous diagonales
% for k = [ouest est]

for k = [-m m ]

   Q = G(p+k);
   q = find(Q);

   ia = [ia;G(p(q))];
   ja = [ja;Q(q)];
   sa = [sa;ones(length(q),1)];

end

A = sparse(ia,ja,sa);


% for k = [nord sud ]
for k = [-1 1 ]

   Q = G(p+k);
   q = find(Q);

   ib = [ib;G(p(q))];
   jb = [jb;Q(q)];
   sb = [sb;ones(length(q),1)];

end
B = sparse(ib,jb,sb);



