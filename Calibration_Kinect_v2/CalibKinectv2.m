clear variables; clc; close all;

for i = 1:12
      imagesRGBs = sprintf('Images/%d_rgb.png', i);
      imagesIRs = sprintf('Images/%d_ir.png', i);
      imagesRGB{i} = fullfile(imagesRGBs);
      imagesIR{i} = fullfile(imagesIRs);
end

[pointsRGB, boardSizeRGB, imagesRGBused] = detectCheckerboardPoints(imagesRGB);
[pointsIR, boardSizeIR, imagesIRused] = detectCheckerboardPoints(imagesIR);

imagesRGB = imagesRGB(imagesRGBused);
imagesIR = imagesIR(imagesIRused);

for i = 1:numel(imagesRGB)
  I = imread(imagesRGB{i});
  subplot(4, 3, i);
  imshow(I); hold on; plot(pointsRGB(:,1,i), pointsRGB(:,2,i), 'ro');
end

squareSizeInMM = 197;
worldPointsRGB = generateCheckerboardPoints(boardSizeRGB,squareSizeInMM);
paramsRGB = estimateCameraParameters(pointsRGB,worldPointsRGB);
worldPointsIR = generateCheckerboardPoints(boardSizeIR,squareSizeInMM);
paramsIR = estimateCameraParameters(pointsIR,worldPointsIR);

RGB=imread('Images/1_rgb.png');
imagesIRcorrect = undistortImage(RGB,paramsRGB);
figure; imshow(imagesIRcorrect);