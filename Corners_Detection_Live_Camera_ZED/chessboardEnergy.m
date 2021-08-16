
function E = chessboardEnergy(chessboard,corners)

    % energy: number of corners
    E_corners = -size(chessboard,1)*size(chessboard,2);

    % energy: structure
    E_structure = 0;

    % walk through rows
    for j=1:size(chessboard,1)
      for k=1:size(chessboard,2)-2
        x           = corners.p(chessboard(j,k:k+2),:);
        E_structure = max(E_structure,norm(x(1,:)+x(3,:)-2*x(2,:))/norm(x(1,:)-x(3,:)));
      end
    end

    % walk through columns
    for j=1:size(chessboard,2)
      for k=1:size(chessboard,1)-2
        x           = corners.p(chessboard(k:k+2,j),:);
        E_structure = max(E_structure,norm(x(1,:)+x(3,:)-2*x(2,:))/norm(x(1,:)-x(3,:)));
      end
    end

    % final energy
    E = E_corners + 1*size(chessboard,1)*size(chessboard,2)*E_structure;
end