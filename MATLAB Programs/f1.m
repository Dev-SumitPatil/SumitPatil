clc;
clear all;
close all;
I=imread('lena.jpg');
%fspecial('gaussian',[r,c],sig). A Gaussian lowpass filter
%of size r x c and standard deviation sig(positive). The defaults
%are 3 x 3 and sigma is 0.5
h=fspecial('gaussian',[5,5],10);
I2=imfilter(I,h);
imshow(I),title('Original Image')
figure,imshow(I2),title('Filtered Image')