I1 = imread('Images/000000_left.png');
I2 = imread('Images/000000_right.png');

imagePoints1 = detectSURFFeatures(I1);
imagePoints2 = detectSURFFeatures(I2);

features1 = extractFeatures(I1,imagePoints1,'Upright',true);
features2 = extractFeatures(I2,imagePoints2,'Upright',true);

indexPairs = matchFeatures(features1,features2);
matchedPoints1 = imagePoints1(indexPairs(:,1));
matchedPoints2 = imagePoints2(indexPairs(:,2));
figure
showMatchedFeatures(I1,I2,matchedPoints1,matchedPoints2);
title('Putative Matches')

IntrinsicMatrix = [707.0912 0 0; 0 707.0912 0; 601.8873 183.1104 1];
cameraParams = cameraParameters('IntrinsicMatrix',IntrinsicMatrix); 

[E,inliers] = estimateEssentialMatrix(matchedPoints1,matchedPoints2, cameraParams, cameraParams);
F = estimateFundamentalMatrix(matchedPoints1, matchedPoints2,'Method','Norm8Point', 'Confidence',0.99)

inlierPoints1 = matchedPoints1(inliers);
inlierPoints2 = matchedPoints2(inliers);
figure
showMatchedFeatures(I1,I2,inlierPoints1,inlierPoints2);
title('Inlier Matches')