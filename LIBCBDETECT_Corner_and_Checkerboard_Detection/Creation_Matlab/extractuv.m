
function [corners_uv, tam_chess] = extractuv(chessboards,corners)

    corners_uv=zeros(1,2);
    coder.varsize('corners_uv');
    t=0;
    
    tam_chess=zeros(5,2);
    coder.varsize('tam_chess');
    
    for i=1:length(chessboards)
        cb = chessboards{i};
        if all(cb(:))
            [r,c]=size(cb);
            tam_chess(i,:)=[r, c];
            t=r*c+t;
            for j=1:size(cb,1)
                p= corners.p(cb(j,:),:)+1;              
                corners_uv=[corners_uv;p];               
            end
        end        
    end
    corners_uv(1,:) = [];

    tam_chess( ~any(tam_chess,2), : ) = [];
    
    if isempty(corners_uv)
        return
    end
    
end


