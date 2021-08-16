
function [modes2, hist_smoothed] = findModesMeanShift(hist,sigma)
    
    modes2=[];
    coder.varsize('modes2');

    % efficient mean-shift approximation by histogram smoothing
    % compute smoothed histogram
    hist_smoothed = zeros(1,length(hist));
    
    for i=1:length(hist)
      j                = -round(2*sigma):+round(2*sigma);
      idx              = mod(i+j-1,length(hist))+1;
      hist_smoothed(i) = sum(hist(idx).*normpdf(j,0,sigma));
    end

    % check if at least one entry is non-zero
    % (otherwise mode finding may run infinitly)
    if all(abs(hist_smoothed-hist_smoothed(1))<1e-5)
      return;
    end

    % mode finding
    for i=1:length(hist_smoothed)
      j=i;
      while 1
        h0 = hist_smoothed(j);
        j1 = mod(j+1-1,length(hist))+1;
        j2 = mod(j-1-1,length(hist))+1;
        h1 = hist_smoothed(j1);
        h2 = hist_smoothed(j2);
        if h1>=h0 && h1>=h2
          j=j1;
        elseif h2>h0 && h2>h1
          j=j2;
        else
          break;
        end
      end
      if size(modes2,1)==0 ||~any(modes2(:,1)==j)
        modes2 = [modes2; j hist_smoothed(j)];
      end
    end

    % sort
    [~, idx] = sort(modes2(:,2),1,'descend');
    modes2 = modes2(idx,:);
end
