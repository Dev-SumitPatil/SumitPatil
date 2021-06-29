clc;
clear all;
close all;
w=imread('lena.jpg');
a=rgb2gray(w);
%addition of noise to input image
b=imnoise(a,'Salt & pepper');
%Defoning 3 by 3 and 5 by 5 kernel
h1=1/9*ones(3,3);
h2=1/25*ones(5,5);
%for recovery of image
c1=conv2(b,h1,'same');
c2=conv2(b,h2,'same');
c3=medfilt2(b,[3,3]);
c4=medfilt2(b,[5,5]);
%Display results
figure,subplot(3,2,1),imshow(a),title('Original image');
subplot(3,2,2),imshow(b),title('salt aand pepper noise');
subplot(3,2,3),imshow(uint8(c1)),title('3 by 3 averaging filter');
subplot(3,2,4),imshow(uint8(c2)),title('5 by 5 averaging filter');
subplot(3,2,5),imshow(uint8(c3)),title('3 by 3 averaging filter');
subplot(3,2,6),imshow(uint8(c4)),title('5 by 5 averaging filter');
