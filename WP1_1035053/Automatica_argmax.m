function[j,maks]=argmax(y) %returns the (lowest) maximum position and the maximum value of the vector y
j=1;
maks=y(1);
for i=2:1:length(y)
    if y(i)> maks;
        maks=y(i);
        j=i;
    end;
end
end