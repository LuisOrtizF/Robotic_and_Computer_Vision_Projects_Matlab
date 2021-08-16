function [imagePoints, boardSize] = dCP(I)
    [imagePoints,boardSize] = detectCheckerboardPoints(I);
end