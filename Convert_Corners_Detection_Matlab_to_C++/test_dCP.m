clear variables; clc; close all;
I = rgb2gray(imread('Images/1.png'));
[imagePoints,boardSize] = dCP(I);
imshow(I);
hold on;
plot(imagePoints(:,1,1),imagePoints(:,2,1),'ro');