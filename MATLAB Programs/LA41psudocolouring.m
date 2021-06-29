clc;
clear all;
close all;
y = imread('fish.jpg');
y = rgb2gray(y);
[p, q] = size(y);
for i=1:1:p
    for j=1:1:q
        if(y(i, j)>=0)&&(y(i, j)<18)
            x(i, j, 1) = 0;
            x(i, j, 2) = 0;
            x(i, j, 3) = 0;
        elseif(y(i, j)>=18)&&(y(i, j)<36)
            x(i, j, 1) = 237;
            x(i, j, 2) = 27;
            x(i, j, 3) = 36;
        elseif(y(i, j)>=36)&&(y(i, j)<54)
            x(i, j, 1) = 239;
            x(i, j, 2) = 24;
            x(i, j, 3) = 131;
        elseif(y(i, j)>=54)&&(y(i, j)<72)
            x(i, j, 1) = 240;
            x(i, j, 2) = 23;
            x(i, j, 3) = 181;
        elseif(y(i, j)>=72)&&(y(i, j)<90)
            x(i, j, 1) = 218;
            x(i, j, 2) = 24;
            x(i, j, 3) = 289;
        elseif(y(i, j)>=90)&&(y(i, j)<108)
            x(i, j, 1) = 220;
            x(i, j, 2) = 45;
            x(i, j, 3) = 50;
        elseif(y(i, j)>=108)&&(y(i, j)<126)
            x(i, j, 1) = 121;
            x(i, j, 2) = 24;
            x(i, j, 3) = 239;
        elseif(y(i, j)>=126)&&(y(i, j)<144)
            x(i, j, 1) = 24;
            x(i, j, 2) = 56;
            x(i, j, 3) = 239;
        elseif(y(i, j)>=144)&&(y(i, j)<162)
            x(i, j, 1) = 30;
            x(i, j, 2) = 152;
            x(i, j, 3) = 234;
        elseif(y(i, j)>=162)&&(y(i, j)<180)
            x(i, j, 1) = 33;
            x(i, j, 2) = 221;
            x(i, j, 3) = 231;
        elseif(y(i, j)>=180)&&(y(i, j)<198)
            x(i, j, 1) = 35;
            x(i, j, 2) = 228;
            x(i, j, 3) = 141;
        elseif(y(i, j)>=198)&&(y(i, j)<216)
            x(i, j, 1) = 64;
            x(i, j, 2) = 230;
            x(i, j, 3) = 34;
        elseif(y(i, j)>=216)&&(y(i, j)<234)
            x(i, j, 1) = 182;
            x(i, j, 2) = 232;
            x(i, j, 3) = 32;
        elseif(y(i, j)>=234)&&(y(i, j)<255)
            x(i, j, 1) = 255;
            x(i, j, 2) = 255;
            x(i, j, 3) = 255;
        end
    end
end
 
x = x/255;
 
figure, 
subplot(2, 2, 1), imshow('fish.jpg');
title('Original Image', 'FontSize', 20)
 
subplot(2, 2, 2), imshow(y);
title('Grayscale Image', 'FontSize', 20)
 
subplot(2, 2, 3), imshow(x);
title('Pseudo Color Image', 'FontSize', 20)
