clear variables; clc; close all;

%%
ptCloud1 = pcread('inicial.ply');
ptCloud2 = pcread('intermedia.ply');
ptCloud3 = pcread('final.ply');

pointscolor=uint8(zeros(ptCloud1.Count,3));
pointscolor(:,1)=255;
pointscolor(:,2)=0;
pointscolor(:,3)=0;
ptCloud1.Color=pointscolor;

pointscolor=uint8(zeros(ptCloud2.Count,3));
pointscolor(:,1)=0;
pointscolor(:,2)=255;
pointscolor(:,3)=0;
ptCloud2.Color=pointscolor;

pointscolor=uint8(zeros(ptCloud3.Count,3));
pointscolor(:,1)=0;
pointscolor(:,2)=0;
pointscolor(:,3)=255;
ptCloud3.Color=pointscolor;

pcshow(ptCloud1);
hold on;
pcshow(ptCloud2);
hold on;
pcshow(ptCloud3);
hold on;
%%

% centroid 
C = [mean(ptCloud1.Location(:,1)) mean(ptCloud1.Location(:,2)) mean(ptCloud1.Location(:,3))]

m1 = mahal(ptCloud1.Location,ptCloud1.Location);
m2 = mahal(ptCloud2.Location,ptCloud2.Location);
m3 = mahal(ptCloud3.Location,ptCloud3.Location);

% m1=sqrt(m1);
% m2=sqrt(m2);
% m3=sqrt(m3);

sum(m1);
sum(m2);
sum(m3);

similarity = abs(100-100*abs(sum(m2)-sum(m1))/abs(sum(m3)-sum(m1)))