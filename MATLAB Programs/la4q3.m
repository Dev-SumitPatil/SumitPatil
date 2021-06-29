clc;
clear all;
close all;
 
Image = imread('lena.tiff');
Image = rgb2gray(Image);
figure, imshow(Image);
title('Original Image', 'FontSize', 22);
 
% Adding periodic noise
[m,n] = size(Image);
Image1 = Image;
for i=1:m
    for j=1:n
        Image1(i,j) = Image(i,j)+40*sin(40*i)+40*sin(40*j);
    end
end
figure, imshow(Image1);
title('Periodic noise added', 'FontSize', 22);
 
FT = fft2(double(Image1));
% Finding spectrum
FT1 = fftshift(FT);
figure, imshow(abs(FT1), []);
title('Frequency Spectrum', 'FontSize', 22);
 
m = size(Image1, 1);
n = size(Image1, 2);
t = 0 : pi/20 : 2*pi;
 
% Point around which we filter image
xc = (m+40)/2; 
yc = (n-40)/2;
 
% Radium of circular region of interest (for BRF)
r = 250;   
r1 = 150;
xcc = r*cos(t) + xc;
ycc = r*sin(t) + yc;
xcc1 = r1*cos(t) + xc;
ycc1 = r1*sin(t) + yc;
 
mask = poly2mask(double(xcc), double(ycc), m, n);
% Generating mask for filtering
mask1 = poly2mask(double(xcc1), double(ycc1), m, n);
mask(mask1) = 0;
 
FT2=FT1;
% Cropping area or band reject filtering
FT2(mask) = 0;
 
output = ifft2(ifftshift(FT2));
figure, imshow(abs(output),[]);
title('Band Reject Filtered', 'FontSize', 22);
