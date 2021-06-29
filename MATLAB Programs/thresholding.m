clc;
clear all;
close all;
w = imread('gray.jpg');
[m n]=size(w);
t=input('Enter threshold parameter : ')
for i = 1:m
    for j = 1:n
        if(w(i,j))<t
            b(i,j)=0;
        else
            b(i,j)=255;
        end
    end
end
subplot(2,2,1),imshow(w), title('original image'),
subplot(2,2,2),imshow(b), title('thresholded image'),
