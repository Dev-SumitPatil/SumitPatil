clc;
close all;
clear all;
w=imread('mountain.jpg');
fc=imnoise(w,'salt and pepper',0.2)
fr=fc(:,:,1);
fg=fc(:,:,1);
fb=fc(:,:,1);
w1=fspecial('average',25)
fr_filtered=imfilter(fr,w1)
fg_filtered=imfilter(fg,w1)
fb_filtered=imfilter(fb,w1)
f_filtered=cat(3,fr_filtered,fg_filtered,fb_filtered)
figure(1),
imshow(w),
figure(2),imshow(fc),figure(3),
imshow(f_filtered)