clc
clear all
close all
a = imread('lena1.jpg')
%perfoem histogram equalization , the process of adjusting intensity
b= histeq(a);
subplot(2,2,1), imshow(a),title('original image');
subplot(2,2,2), imshow(b),title('After histogram equalization');
subplot(2,2,3), imhist(a),title('original histogram');
subplot(2,2,4), imhist(b),title('After histogram equalization');
