clc;clear all;close all;
c=imread('ABC.tif');%also applicable for grayscale
cd=double(c);
c0=mod(cd,2);
figure,imshow(c0);
%floor(A) rounds the elment nearest to integer less than or equal to A
%examples for mod(13,5)
%ans=3
%mod([1:5],3)
%ans=1 2 0 1 2
c1=mod(floor(cd/2),2);
figure;imshow(c1);
c2=mod(floor(cd/4),2);
figure;imshow(c2);
c3=mod(floor(cd/8),2);
figure;imshow(c3);
c4=mod(floor(cd/16),2);
figure;imshow(c4);
c5=mod(floor(cd/32),2);
figure;imshow(c5);
c6=mod(floor(cd/64),2);
figure;imshow(c6);
c7=mod(floor(cd/128),2);
figure;imshow(c7);
