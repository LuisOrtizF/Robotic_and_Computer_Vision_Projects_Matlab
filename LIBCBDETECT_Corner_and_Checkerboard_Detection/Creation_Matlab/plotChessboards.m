
function plotChessboards(chessboards,corners)

    v0 = 0;
    b = 0;
    
    for i=1:length(chessboards)
        cb = chessboards{i};
        if all(cb(:))
            b=b+1;             
        end      
    end
        
    % for all chessboards do
    % for i=1:length(chessboards)
     for i=1:b
      % extract chessboard
      cb = chessboards{i};

      % plot lines in black
      for j=1:size(cb,1)
        p = corners.p(cb(j,:),:)+1;
        plot(p(:,1),v0+p(:,2),'-','Color','b','LineWidth',1);
      end
      
      for j=1:size(cb,2)
        p = corners.p(cb(:,j),:)+1;
        plot(p(:,1),v0+p(:,2),'-','Color','b','LineWidth',1);
      end

      % plot coordinate system
      if v0==0
        l1 = [corners.p(cb(1,1),:); corners.p(cb(1,2),:)]+1;
        l2 = [corners.p(cb(1,1),:); corners.p(cb(2,1),:)]+1;
        plot(l1(:,1),v0+l1(:,2),'-','Color','r','LineWidth',3);
        plot(l2(:,1),v0+l2(:,2),'-','Color','g','LineWidth',3);
      end

      % plot numbers
      if v0==0
        c = mean(corners.p(cb(:),:),1)+1;
        %         if i==1
        %             text(c(1),v0+c(2),'1','Color','y','FontSize',15);
        %         end
        %         if i==2
        %             text(c(1),v0+c(2),'2','Color','y','FontSize',15);
        %         end
        %         if i==3
        %             text(c(1),v0+c(2),'3','Color','y','FontSize',15);
        %         end
        text(c(1),v0+c(2),num2str(i),'Color','y','FontSize',15);
      end
    end
end
