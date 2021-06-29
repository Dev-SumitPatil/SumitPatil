clc,close all, clear all;
a= imread('gray.jpg');
b=255 -a ;
subplot(2,1,1), imshow(a), title('original image');
subplot(2,1,2), imshow(b), title('Negative og original image');
