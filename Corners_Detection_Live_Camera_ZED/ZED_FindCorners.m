clear variables; close all; clc;
  
% get access to the ZED camera
zed = webcam('ZED');
% set the desired resolution
zed.Resolution = zed.AvailableResolutions{3}
% get the image siz
[height, width, channels] = size(snapshot(zed));
% Create Figure and wait for keyboard intrruption to quit
f = figure('name','ZED','NumberTitle','off','keypressfcn','close','windowstyle','modal');
%set(gcf, 'PaperUnits', 'Centimeters', 'PaperSize', [21.5900, 5])
ok=1;
aux=0;

% loop over frames
while ok 
    %capture the current imaged
    imgCPU = snapshot(zed);
    img= gpuArray(imgCPU);
    % split the side by side image image into two images
    im_Left = img(:, 1 : width/2, :);
    % display the left and right images
    subplottight(1,2,1);
    imshow(im_Left,'border', 'tight');
    title('Image Left');
    
    im_Left = im2double(im_Left);
    if length(size(im_Left))==3
    im_Left = rgb2gray(im_Left);
    end

    I = gather(im_Left);

    if ishandle(f)
        
        disp('Detecting Corners.')

        corners = findCorners(I,0.01,1);
        chessboards = chessboardsFromCorners(corners);
        [corners_uv, tam_chess]= extractuv(chessboards, corners);

        subplottight(1,2,2);
        imshow(img(:, 1 : width/2, :),'border', 'tight'); hold on;
        plotChessboards(chessboards,corners);
        title('Corners Detected');

        disp('Finish.')
        disp('Click on Figure-->Corners Detected.')

        pause(1)

        %clic into figure for save corners txt
        try
            
            w = waitforbuttonpress;
            clc;
            
            if size(tam_chess,1)==1 && w==0
                filesnames=[pwd '\Results\corners_' num2str(aux) '.txt'];
                filesnames2=[pwd '\Results\result_' num2str(aux)];
                filesnames3=[pwd '\Results\im_Left_' num2str(aux) '.png'];
                
                saveas(f, filesnames2, 'png')
                imwrite(I,filesnames3);
                
                fileID = fopen(filesnames,'w');
                formatSpec = '%6.3f %6.3f\n';
                fprintf(fileID, formatSpec, corners_uv);
                fclose(fileID);

                aux=aux+1;
            end

        catch exception
             warning('Waitforbuttonpress exit because target figure has been deleted Matlab.');
        end     
    end
    
    clear corners chessboards tam_chess corners_uv
    
    drawnow; %this checks for interrupts
    ok = ishandle(f); %does the figure still exist  
    
end
  
% close the camera instance
clear zed;