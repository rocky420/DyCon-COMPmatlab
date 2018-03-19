function [U01,U11]=data3_2d(X,Y,T)

[p,q]=size(X);
U01=zeros(size(X));
U11=zeros(size(X));
for i=1:p
    for j=1:q
        U01(i,j)=10*X(1,i)*(1-X(1,i))*Y(p-j+1,1)*(1-Y(p-j+1,1));
    end
end    


%end


