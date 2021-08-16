
function chessboards = chessboardsFromCorners(corners)

    % intialize chessboards
    n=5;
    assert(n<6)
    chessboards = cell(1,n);

    for i = 1:n
        chessboards{i} = zeros(6,7);
    end
     
    p_energy=zeros(1,4);
    proposal = {0 0 0 0};
    coder.varsize('proposal');

    a=0;
    
    % for all seed corners do
    for i=1:size(corners.p,1)

        % init 3x3 chessboard from seed i
      chessboard = initChessboard(corners,i);
      coder.varsize('chessboard'); 

      % check if this is a useful initial guess
      if isempty(chessboard) || chessboardEnergy(chessboard,corners)>0
        continue;
      end

      % try growing chessboard
      while 1

        % compute current energy
        energy = chessboardEnergy(chessboard,corners);

        % compute proposals and energies
        for j=1:4
          proposal{j} = growChessboard(chessboard,corners,j);
          p_energy(j) = chessboardEnergy(proposal{j},corners);
        end

        % find best proposal
        [~,min_idx] = min(p_energy);

        % accept best proposal, if energy is reduced
        if p_energy(min_idx)<energy
          chessboard = proposal{min_idx};

        % otherwise exit loop
        else
          break;
        end
      end
      
      % if chessboard has low energy (corresponding to high quality)
      if chessboardEnergy(chessboard,corners)<-10

        if a==0
            chessboards{1} = zeros(size(chessboard));
        end

        % check if new chessboard proposal overlaps with existing chessboards
        overlap = zeros(length(chessboards),2);
        
        %[rr,cc]=size(chessboards);
        
        for j=1:length(chessboards)     %rr*cc     
          for k=1:length(chessboards{j}(:))
            if any(chessboards{j}(k)==chessboard(:))
              overlap(j,1) = 1;
              overlap(j,2) = chessboardEnergy(chessboards{j},corners);
              break;
            end
          end
        end

        % add chessboard (and replace overlapping if neccessary)
        if ~any(overlap(:,1))
          a=a+1;
          chessboards{a} = chessboard;
        else
          idx = find(overlap(:,1)==1);
          if ~any(overlap(idx,2)<=chessboardEnergy(chessboard,corners))
            chessboards{idx} = [];
            chessboards{a} = chessboard;
          end
        end
      end

    end
    
    chessboards = cellfun(@(x) x(any(x,2),:),chessboards,'UniformOutput',false);
    chessboards(:, any(cellfun(@isempty, chessboards), 1)) = [];
    %disp('Find Chessboards OK');  
end