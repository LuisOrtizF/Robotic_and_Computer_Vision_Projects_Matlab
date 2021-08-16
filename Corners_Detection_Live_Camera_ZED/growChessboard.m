
function chessboard = growChessboard(chessboard,corners,border_type)

    % return immediately, if there do not exist any chessboards
    if isempty(chessboard)
      return;
    end

    % extract feature locations
    p = corners.p;

    % list of unused feature elements
    unused       = 1:size(corners.p,1);
    used         = chessboard(chessboard~=0);
    unused(used) = [];
    coder.varsize('unused');

    % candidates from unused corners
    cand = p(unused,:);

    % switch border type 1..4
    switch border_type

      case 1
        pred = predictCorners(p(chessboard(:,end-2),:),p(chessboard(:,end-1),:),p(chessboard(:,end),:));
        idx = assignClosestCorners(cand,pred);
        if all(idx~=0)
          chessboard = [chessboard unused(idx)'];
        end

      case 2
        pred = predictCorners(p(chessboard(end-2,:),:),p(chessboard(end-1,:),:),p(chessboard(end,:),:));
        idx = assignClosestCorners(cand,pred);
        if all(idx~=0)
          chessboard = [chessboard; unused(idx)];
        end

      case 3
        pred = predictCorners(p(chessboard(:,3),:),p(chessboard(:,2),:),p(chessboard(:,1),:));
        idx = assignClosestCorners(cand,pred);
        if all(idx~=0)
          chessboard = [unused(idx)' chessboard];
        end

      case 4
        pred = predictCorners(p(chessboard(3,:),:),p(chessboard(2,:),:),p(chessboard(1,:),:));
        idx = assignClosestCorners(cand,pred);
        if all(idx~=0)
          chessboard = [unused(idx); chessboard];
        end
    end
end

function pred = predictCorners(p1,p2,p3)

    % compute vectors
    v1 = p2-p1;
    v2 = p3-p2;

    % predict angles
    a1 = atan2(v1(:,2),v1(:,1));
    a2 = atan2(v2(:,2),v2(:,1));
    a3 = 2*a2-a1;

    % predict scales
    s1 = sqrt(v1(:,1).^2+v1(:,2).^2);
    s2 = sqrt(v2(:,1).^2+v2(:,2).^2);
    s3 = 2*s2-s1;

    % predict p3 (the factor 0.75 ensures that under extreme
    % distortions (omnicam) the closer prediction is selected)
    pred = p3 + 0.75*s3*ones(1,2) .* [cos(a3) sin(a3)];
end

function idxx = assignClosestCorners(cand,pred)
   
    % return error if not enough candidates are available
    if size(cand,1)<size(pred,1)
      idxx = 0;
      return;
    end
            
    % build distance matrix
    D = zeros(size(cand,1),size(pred,1));
    
    for i=1:size(pred,1)
      delta  = cand-ones(size(cand,1),1)*pred(i,:);
      D(:,i) = sqrt(delta(:,1).^2+delta(:,2).^2);
    end
    
    idxx=zeros(1,size(pred,1));
    coder.varsize('idxx');
    
    % search greedily for closest corners
    for i=1:size(pred,1)
      [row, col] = find(D==min(D(:)),1,'first'); %Locate the first one nonzero. 
      
      idxx(col)  = row;
      D(row,:)  = inf;
      D(:,col)  = inf;      
    end
end
