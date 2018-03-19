function [C] = grdiv1(G1)

p = find(G1);
ia = G1(p);
sa = ones(length(p),1);
C = sparse(ia,ia,sa);

