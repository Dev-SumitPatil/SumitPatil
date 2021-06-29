clc;
clear all;
close all;
a=imread('lena.jpg');
b=imread('img2.jpg');
c=double(a)+double(b);
imshow(a),
figure,imshow(b),
figure,imshow(uint8(c)),
