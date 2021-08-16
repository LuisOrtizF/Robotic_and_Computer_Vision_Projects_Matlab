clear variables; clc; close all;

for i = 0:17
      imagesRGBs = sprintf('Images/%d.jpg', i);
      imagesRGB{i+1} = fullfile(imagesRGBs);
end

[pointsRGB, boardSizeRGB, imagesRGBused] = detectCheckerboardPoints(imagesRGB);
imagesRGB = imagesRGB(imagesRGBused);

squareSizeInMM = 98;
worldPointsRGB = generateCheckerboardPoints(boardSizeRGB,squareSizeInMM);
paramsRGB = estimateCameraParameters(pointsRGB,worldPointsRGB)