clf;
clc;
clear all;
close all;
i = imread('lena.jpg');
figure, imshow(i)
z=rgb2gray(i)
%imwrite(z,'lena.jpg')
figure,imshow(z)
figure, imhist(z)
axis([0 256 0 2000]);