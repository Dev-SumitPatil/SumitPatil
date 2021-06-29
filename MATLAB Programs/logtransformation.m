clc;
clear all;
close all;
a = imread('gray.jpg');
L=255;
c=L/log10(1+L);
d=c*log10(1+double(a));
figure,imshow(a),title('original image')
figure,imshow(uint8(d)),title('Log transformation image')