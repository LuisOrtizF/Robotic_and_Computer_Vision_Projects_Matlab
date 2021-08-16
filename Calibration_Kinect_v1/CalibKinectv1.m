clear variables; clc; close all;

for i = 1:15
      imagesRGBs = sprintf('Images/%d.png', i);
      imagesRGB{i} = fullfile(imagesRGBs);
end

[pointsRGB, boardSizeRGB, imagesRGBused] = detectCheckerboardPoints(imagesRGB);

imagesRGB = imagesRGB(imagesRGBused);

squareSizeInMM = 197;
worldPointsRGB = generateCheckerboardPoints(boardSizeRGB,squareSizeInMM);
paramsRGB = estimateCameraParameters(pointsRGB,worldPointsRGB)