x=imread('lena1.jpg');
figure(1);
imshow(x);
title('Original image')
a=min(x(:));
b=max(x(:));
y=x*2;
x=(x-a).*(255/(b-a));
figure(2);
imshow(x);
title('contrast stretched image 1')
figure(3)
imshow(y);
title('contrast stretched image 2')