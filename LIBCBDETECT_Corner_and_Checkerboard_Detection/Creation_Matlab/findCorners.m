
function corners3 = findCorners(img, tau, refine_corners)

    % 3 scales
    radius=zeros(1,3);
    radius(1) = 4;
    radius(2) = 8;
    radius(3) = 12;

    % sobel masks
    du = [-1 0 1; -1 0 1; -1 0 1];
    dv = du';

    % compute image derivatives (for principal axes estimation)
    img_du     = conv2(double(img),du,'same');
    img_dv     = conv2(double(img),dv,'same');
       
    img_angle  = atan2(img_dv,img_du);
    img_weight = sqrt(img_du.^2+img_dv.^2);

    % correct angle to lie in between [0,pi]
    img_angle(img_angle<0)  = img_angle(img_angle<0)+pi;
    img_angle(img_angle>pi) = img_angle(img_angle>pi)-pi;

    % scale input image
    img     = double(img);
    img_min = min(img(:));
    img_max = max(img(:));
    img     = (img-img_min)/(img_max-img_min);

    % template properties
    template_props = [0 pi/2 radius(1); pi/4 -pi/4 radius(1); 0 pi/2 radius(2); pi/4 -pi/4 radius(2); 0 pi/2 radius(3); pi/4 -pi/4 radius(3)];

    %disp('Filtering ...');

    % filter image
    img_corners = zeros(size(img,1),size(img,2));

    for template_class=1:size(template_props,1)

      % create correlation template
      template = createCorrelationPatch(template_props(template_class,1),template_props(template_class,2),template_props(template_class,3));

      % filter image according with current template
      img_corners_a1 = conv2(img,template.a1,'same');
      img_corners_a2 = conv2(img,template.a2,'same');
      img_corners_b1 = conv2(img,template.b1,'same');
      img_corners_b2 = conv2(img,template.b2,'same');

      % compute mean
      img_corners_mu = (img_corners_a1+img_corners_a2+img_corners_b1+img_corners_b2)/4;

      % case 1: a=white, b=black
      img_corners_a = min(img_corners_a1-img_corners_mu,img_corners_a2-img_corners_mu);
      img_corners_b = min(img_corners_mu-img_corners_b1,img_corners_mu-img_corners_b2);
      img_corners_1 = min(img_corners_a,img_corners_b);

      % case 2: b=white, a=black
      img_corners_a = min(img_corners_mu-img_corners_a1,img_corners_mu-img_corners_a2);
      img_corners_b = min(img_corners_b1-img_corners_mu,img_corners_b2-img_corners_mu);
      img_corners_2 = min(img_corners_a,img_corners_b);

      % update corner map
      img_corners = max(img_corners,img_corners_1);
      img_corners = max(img_corners,img_corners_2);
    end

    % extract corner candidates via non maximum suppression
    corners.p = nonMaximumSuppression(img_corners,3,0.025,5);
       
    %disp('Refining ...');

    corners2 = struct('p',zeros(size(corners.p,1),2),'v1',zeros(size(corners.p,1),2),'v2',zeros(size(corners.p,1),2));
    coder.varsize('corners2.p');
    coder.varsize('corners2.v1');
    coder.varsize('corners2.v2');
    
    corners2.p=corners.p;
    
    % subpixel refinement
    if refine_corners
      corners2 = refineCorners(img_du,img_dv,img_angle,img_weight,corners2,10);
    end
       
    % remove corners without edges
    idx = (corners2.v1(:,1)==0 & corners2.v1(:,2)==0);
    
    corners2.p(idx,:)  = [];
    corners2.v1(idx,:) = [];
    corners2.v2(idx,:) = [];

    %disp('Scoring ...');
   
    corners3 = struct('p',zeros(size(corners2.p,1),2),'v1',zeros(size(corners2.v1,1),2),'v2',zeros(size(corners2.v2,1),2),'score',zeros(size(corners2.p,1),1));
    coder.varsize('corners3.p');
    coder.varsize('corners3.v1');
    coder.varsize('corners3.v2');
    coder.varsize('corners3.score')
    
    corners3.p=corners2.p;
    corners3.v1=corners2.v1;
    corners3.v2=corners2.v2;
    
    % score corners
    corners3 = scoreCorners(img,img_angle,img_weight,corners3,radius);
     
    % remove low scoring corners
    idx = corners3.score<tau;

    corners3.p(idx,:)     = [];
    corners3.v1(idx,:)    = [];
    corners3.v2(idx,:)    = [];
    corners3.score(idx) = [];
        
    % make v1(:,1)+v1(:,2) positive (=> comparable to c++ code)
    idx = corners3.v1(:,1)+corners3.v1(:,2)<0;
    corners3.v1(idx,:) = -corners3.v1(idx,:);

    % make all coordinate systems right-handed (reduces matching ambiguities from 8 to 4)
    corners_n1 = [corners3.v1(:,2) -corners3.v1(:,1)];
    flipx       = -sign(corners_n1(:,1).*corners3.v2(:,1)+corners_n1(:,2).*corners3.v2(:,2));
    corners3.v2 = corners3.v2.*(flipx*ones(1,2));

    % convert to 0-based index
    corners3.p = corners3.p-1;  
        
    %disp('Find Corners OK');
end
