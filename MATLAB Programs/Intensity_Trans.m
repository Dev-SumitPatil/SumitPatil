clear all;
close all;
clc;
gamma=0.1;
f=imread('lena1.jpg');
figure(1)
imshow(f)
g=imadjust(f,[0.5,1],[0,1],gamma);
figure(2)
imshow(g)
g1=imadjust(f,[],[],2);
figure(3)
imshow(g1)