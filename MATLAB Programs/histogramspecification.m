%clear all previous data
clc, clear all, close all;
% load input and reference image
img_src=imread();
ref=imread();
%separate input image's color channel
imgr = img_src(;;1) 