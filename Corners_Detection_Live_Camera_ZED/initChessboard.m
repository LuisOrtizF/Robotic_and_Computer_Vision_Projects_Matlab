
function chessboard = initChessboard(corners,idx)

    % return if not enough corners
    if size(corners.p,1)<9
      chessboard = [];
      return;
    end

    % init chessboard hypothesis
    chessboard = zeros(3,3);
    coder.varsize('chessboard');
    
    dist1=zeros(1,2);
    dist2=zeros(1,6);

    % extract feature index and orientation (central element)
    v1 = corners.v1(idx,:);
    v2 = corners.v2(idx,:);
    chessboard(2,2) = idx;

    % find left/right/top/bottom neighbors
    [chessboard(2,3),dist1(1)] = directionalNeighbor(idx,+v1,chessboard,corners);
    [chessboard(2,1),dist1(2)] = directionalNeighbor(idx,-v1,chessboard,corners);
    [chessboard(3,2),dist2(1)] = directionalNeighbor(idx,+v2,chessboard,corners);
    [chessboard(1,2),dist2(2)] = directionalNeighbor(idx,-v2,chessboard,corners);

    % find top-left/top-right/bottom-left/bottom-right neighbors
    [chessboard(1,1),dist2(3)] = directionalNeighbor(chessboard(2,1),-v2,chessboard,corners);
    [chessboard(3,1),dist2(4)] = directionalNeighbor(chessboard(2,1),+v2,chessboard,corners);
    [chessboard(1,3),dist2(5)] = directionalNeighbor(chessboard(2,3),-v2,chessboard,corners);
    [chessboard(3,3),dist2(6)] = directionalNeighbor(chessboard(2,3),+v2,chessboard,corners);

    % initialization must be homogenously distributed
    if any(isinf(dist1)) || any(isinf(dist2)) || ...
       std(dist1)/mean(dist1)>0.3 || std(dist2)/mean(dist2)>0.3
      chessboard = [];
      return;
    end
end


function [neighbor_idx,min_dist] = directionalNeighbor(idx,v,chessboard,corners)

    % list of neighboring elements, which are currently not in use
    unused       = 1:size(corners.p,1);
    used         = chessboard(chessboard~=0);
    unused(used) = [];
    coder.varsize('unused');

    % direction and distance to unused corners
    dir  = corners.p(unused,:) - ones(length(unused),1)*corners.p(idx,:);
    dist = (dir(:,1)*v(1)+dir(:,2)*v(2));

    % distances
    dist_edge = dir-dist*v;
    dist_edge = sqrt(dist_edge(:,1).^2+dist_edge(:,2).^2);
    dist_point = dist;
    dist_point(dist_point<0) = inf;

    % find best neighbor
    [min_dist,min_idx] = min(dist_point+5*dist_edge);
    neighbor_idx = unused(min_idx);
end
