y=rgb2gray(y);
[p,q]=size(y)
for i=1:1:p
    for j=1:1:q
        if(y(i,j)>=0&&(y(i,j)<18))
            x(i,j,1)=0;
            x(i,j,2)=0;
            x(i,j,3)=0;
        elseif(y(i,j)>=18)&&(y(i,j)<36)
            x(i,j,1)=237;
            x(i,j,2)=27;
            x(i,j,3)=36;