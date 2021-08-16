clc;
close all;
clear mex; clear functions; clear all;

dbstop error;

InitParameters.svo_input_filename = 'Video/vo.svo'; % Enable SVO playback
InitParameters.depth_mode = 2; %QUALITY
InitParameters.camera_disable_self_calib = true;
InitParameters.coordinate_units = 2; %METER

result = mexZED('open', InitParameters);

if(strcmp(result,'SUCCESS')) % the Camera is open
    
    camInfo = mexZED('getCameraInformation');
    nbFrame = mexZED('getSVONumberOfFrames'); 
    
    param.f      = camInfo.left_cam.fx;
    param.cu     = camInfo.left_cam.cx;
    param.cv     = camInfo.left_cam.cy;
    param.height = 0.292;
    param.pitch  = 0.016390;
    first_frame  = 0;
    last_frame   = nbFrame;
     
    % init visual odometry
    visualOdometryMonoMex('init',param);

    % init transformation matrix array
    Tr_total{1} = eye(4);
    
    % create figure
    figure('Color',[1 1 1]);
    ha1 = axes('Position',[0.05,0.7,0.9,0.25]);
    axis off;
    ha2 = axes('Position',[0.05,0.05,0.9,0.6]);
    set(gca,'XTick',-500:10:500);
    set(gca,'YTick',-500:10:500);
    axis equal, grid on, hold on;
    
    % for all frames do
    replace = 0;
    
    % loop over frames
    for frame = first_frame:last_frame
        
        % grab the current image and compute the depth
        result = mexZED('grab'); 
        
        if(strcmp(result,'SUCCESS'))
             
            % 1-based index
            k = frame-first_frame+1;
            
            % retrieve letf image
            I = rgb2gray(mexZED('retrieveImage', 0)); %left
            
            % compute egomotion
            Tr = visualOdometryMonoMex('process',I,replace);

            % accumulate egomotion, starting with second frame
            if k>1
                % if motion estimate failed: set replace "current frame" to "yes"
                % this will cause the "last frame" in the ring buffer unchanged
                if isempty(Tr)
                    replace = 1;
                    %disp('false')
                    Tr_total{k} = Tr_total{k-1};                   
                    z = Tr_total{k}(3,4);

                % on success: update total motion (=pose)
                else
                    replace = 0;
                    %disp('true')
                    Tr_total{k} = Tr_total{k-1}*inv(Tr);                    
                    z = Tr_total{k}(3,4);
                end
            end
                                  
            % update image
            axes(ha1); cla;
            imagesc(I); colormap(gray);
            axis off;           
   
             % update trajectory
            axes(ha2);
            
            if k>1
                plot([Tr_total{k-1}(1,4) Tr_total{k}(1,4)], ...
                 [Tr_total{k-1}(3,4) Tr_total{k}(3,4)],'-xb','LineWidth',1);
            end
            
            pause(0.05); refresh;

            % output statistics
            %             num_matches = visualOdometryMonoMex('num_matches');
            %             num_inliers = visualOdometryMonoMex('num_inliers');
            %             disp(['Frame: ' num2str(frame) ...
            %                 ', Matches: ' num2str(num_matches) ...
            %                 ', Inliers: ' num2str(100*num_inliers/num_matches,'%.1f') ,' %']);

        end
    end
end

% Make sure to call this function to free the memory before use this again
mexZED('close')
clear mex;
visualOdometryMonoMex('close');
disp('========= END =========');

