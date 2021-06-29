clc;
clear all;
close all;
 
Image = imread('house.jpg');
Image = rgb2gray(Image);
s = 2;
figure(1), imshow('house.jpg');
title('Original Image', 'FontSize', 25);
 
% Lapalcian of Gaussian method
E1 = edge(Image, 'log', [], s); 
figure(2), imshow(E1, []);
title('Laplacian of Gaussian method', 'FontSize', 25);
 
% Canny method
E2 = edge(Image, 'canny', [], s);
figure(3), imshow(E2, []);
title('Canny method', 'FontSize', 25);
