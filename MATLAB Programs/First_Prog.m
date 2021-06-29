clear all;close all;clc;
a=imread('lena.jpg');
figure,
imshow(a),
imfinfo('lena.jpg')
a(100,200,2)
a(100,200,1:3)
imwrite(a,'ABC.tif')
b=imread('ABC.tif');
figure,
imshow(b),
imfinfo('ABC.tif')