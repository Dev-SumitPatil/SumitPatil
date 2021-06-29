clc;
clear all;
close all;
a = imread('lena.jpg');
a= rgb2gray(a);
gamma = 1;
d= double(a).^gamma;
imshow(a),title('original image')
figure,imshow(uint8(d)),title('powerlaw transformation gamma=1')
gamma1=2;
d1=double(a).^gamma1;
figure,imshow(uint8(d1)),title('powerlaw transformation gamma=0.8')