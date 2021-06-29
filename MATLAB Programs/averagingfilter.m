clc;clear all; close all;
w=imread('lena.jpg');
imshow(w)
%Addition of niose to input image
a=rgb2gray(w);
%b=imnoise(a,'salt and pepper')
c=imnoise(a,'gaussian');
%d=imnoise(a,'speckle');
%drfining 3 by 3 matrix and 5 by 5 kernel
h1=1/9*ones(3,3)
h1=1/25*ones(5,5);
%for recovery of image
%b1=conv2(b,h1,'same');
%b2=conv2(b,h2,'same');
c1=conv2(c,h1,'same');
c2=conv2(c,h2,'same');
%d1=conv2(d,h1,'same');
%d2=conv2(d,h2,'same');
%Displaying the results
%figure,subplot(2,2,1),imshoow(a),title('original image');
%subplot(2,2,2),imshoow(b),title('salt and pepper image');
%subplot(2,2,3),imshoow(uint8(b1)),title('3 by 3 averaging filter');
%subplot(2,2,4),imshoow(uint8(b2)),title('5 by 5 averaging filter');
%-----------------------------------------------------------------
figure,subplot(2,2,1),imshoow(a),title('original image');
subplot(2,2,2),imshow(c),title('Gaussian noise');
subplot(2,2,3),imshow(uint8(c1)),title('3 by 3 averaging filter');
subplot(2,2,4),imshow(uint8(c2)),title('5 by 5 averaging filter');
%----------------------------------------------------------------
%figure,subplot(2,2,1),imshoow(a),title('original image');
%subplot(2,2,2),imshoow(d),title('Speckle noise');
%subplot(2,2,3),imshoow(uint8(d1)),title('3 by 3 averaging filter');
%subplot(2,2,4),imshoow(uint8(d2)),title('5 by 5 averaging filter');



