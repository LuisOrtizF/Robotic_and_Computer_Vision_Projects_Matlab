function corners = scoreCorners(img,~,img_weight,corners,radius)

    width  = size(img,2);
    height = size(img,1);

    score=zeros(1,length(radius));  
    
    % for all corners do
    for i=1:size(corners.p,1)

      % corner location
      u = round(corners.p(i,1));
      v = round(corners.p(i,2));

      % compute corner statistics @ radius 1
      for j=1:length(radius)
        score(j) = 0;
        if u>radius(j) && u<=width-radius(j) && v>radius(j) && v<=height-radius(j)
          img_sub        = img(v-radius(j):v+radius(j),u-radius(j):u+radius(j));
          img_weight_sub = img_weight(v-radius(j):v+radius(j),u-radius(j):u+radius(j));
          score(j)       = cornerCorrelationScore(img_sub,img_weight_sub,corners.v1(i,:),corners.v2(i,:));
        end
      end

      % take highest score
      corners.score(i,1) = max(score);
    end
end
