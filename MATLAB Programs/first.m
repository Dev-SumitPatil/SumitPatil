clc;
clear all;
close all;
RGB=imread('mountain.jpg');
R=RGB;
G=RGB;
B=RGB;
R(:,:,2)=0;
R(:,:,3)=0;

G(:,:,1)=0;
G(:,:,3)=0;

B(:,:,1)=0;
B(:,:,2)=0;
subplot(2,2,1),imshow(RGB),title('original image')
subplot(2,2,2),imshow(R),title('red component')

subplot(2,2,3),imshow(G),title('green component')

subplot(2,2,4),imshow(B),title('blue component')
