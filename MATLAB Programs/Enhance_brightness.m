clf;
clear all;
close all;
clc;
a= imread('lena.jpg');
b=a+50;
figure,
imshow(a),title('Original image')
figure, imshow(b),title('Enhanced image');
imfinfo('lena.jpg')