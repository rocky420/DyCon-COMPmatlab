function wcg = injecte(wfg,G,J)

% Injection of w defined on the fine meshing wfg (Fine Grid) on  
% unrefined meshing wcg (Coarse Grid).

% J is supposed unpar. wcg consists of wfg calculated on them
% hurt whose global number is odd and of which the number of line
% and of column are odd, global numbering.

% ATTENTION: wfg must be a a vector; wfg is
% a vector containing the values of f on nodes interior

% Number of points on the grid G
%a = [1:(J+2)^2]';

% FIRST STAGE: the points of odd number.
%b = find(rem(a,2));

% The SECOND STAGE: J is unpar, points are classified in categories two:
% points having at the same moment an even number of column and line and
% those having at the same moment an number of line and column
% it is thus enough to eliminate the even lines

%p = find(rem(rem(b,J+2),2));

% The THIRD STAGE: points on the line J+2 were eliminated. It is necessary to add them
%b = [b(p);(J+2:2*J+4:(J+2)^2)'];

% The FOURTH STAGE: p contains the indications, the global numeration of the 
% points of the unrefined meshing

%clear p;
%p = find(G(b));
%wcg = wfg(G(b(p)));

p=( (J+2)*2+3:2:(J+2)*3-2 )';
for col=5:2:J
p = [p;((J+2)*(col-1)+3:2:(J+2)*col-2)'];
end

wcg = wfg( G(p).*ones(length(p),1) ); 