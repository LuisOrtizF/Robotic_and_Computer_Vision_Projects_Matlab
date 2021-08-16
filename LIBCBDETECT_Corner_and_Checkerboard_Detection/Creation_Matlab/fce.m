function [corners_uv, tam_chess] = fce(image)

corners = findCorners(image,0.01,1);
chessboards = chessboardsFromCorners(corners);
 
figure; imshow(uint8(image)); hold on;

plotChessboards(chessboards,corners);

[corners_uv, tam_chess]= extractuv(chessboards, corners);

end