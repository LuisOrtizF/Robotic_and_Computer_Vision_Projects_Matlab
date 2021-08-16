clear variables; clc; close all;

%Capture RGB and depth images
colorDevice = imaq.VideoDevice('kinect', 1);
depthDevice = imaq.VideoDevice('kinect', 2);

framecolor = step(colorDevice);
framedepth = step(depthDevice);
framecolor = flip(framecolor,2);
framedepth = flip(framedepth,2);

% %% kinectv2
% %ptCloud = pcfromkinect(depthDevice, framedepth, framecolor, 'depthCentric');
% ptCloud = pcfromkinect(depthDevice, framedepth, framecolor, 'colorCentric');
% 
% framedepth2 = ptCloud.Location(:,:,3);
% %framedepth2 = ptCloud.Color;
% framedepth2 = flip(framedepth2,2);
% 
% figure;
% imshow(framedepth2)
% imwrite(framedepth2,'1_d2.png')
% %%

figure;
imshow(framecolor)
imwrite(framecolor,'1_l.png')

figure;
imshow(framedepth)
imwrite(framedepth,'1_d.png')

release(colorDevice);
release(depthDevice);

clear colorDevice;
clear depthDevice;