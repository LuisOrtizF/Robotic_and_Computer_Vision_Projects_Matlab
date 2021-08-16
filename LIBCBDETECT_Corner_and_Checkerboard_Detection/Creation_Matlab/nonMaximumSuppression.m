
function maxima = nonMaximumSuppression(img,n,tau,margin)

    % extract parameters
    width  = size(img,2);
    height = size(img,1);

    % init maxima list
    maxima=[];
    coder.varsize('maxima');

    % non maximum suppression
    for i=n+1+margin:n+1:width-n-margin
      for j=n+1+margin:n+1:height-n-margin

        maxi   = i;
        maxj   = j;
        maxval = img(j,i);

        for i2=i:i+n
          for j2=j:j+n
            currval = img(j2,i2);
            if currval>maxval
              maxi   = i2;
              maxj   = j2;
              maxval = currval;
            end
          end
        end

        failed = 0;
        for i2=maxi-n:min(maxi+n,width-margin)
          for j2=maxj-n:min(maxj+n,height-margin)
            currval = img(j2,i2);
            if currval>maxval && (i2<i || i2>i+n || j2<j || j2>j+n)
              failed = 1;
              break;
            end
          end
          if failed
            break;
          end
        end
        if maxval>=tau && ~failed
          maxima = [maxima; maxi maxj];
        end
      end
    end
end
