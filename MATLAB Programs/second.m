clc;
clear all;
close all;
a=imread('mountain.jpg');
a1=a
b1=a
c1=a
a1(:,:,1)=0
b1(:,:,2)=0
c1(:,:,3)=0
imshow(a),title('original')
figure,imshow(a1),title('red misiing')
figure,imshow(b1),title('red misiing')
figure,imshow(c1),title('red misiing')