clear variables; clc; close all;
I = rgb2gray(imread('../Images/test_1.png'));
[cuv, tc]=fce(I);