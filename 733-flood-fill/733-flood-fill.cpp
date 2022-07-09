class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
         if(image[sr][sc]==color) return image;
    
    queue<pair<int,int>> q;
    int n = image.size();
    int m = image[0].size();
    int oldColor = image[sr][sc];
    
    q.push({sr,sc});
    while(!q.empty())
    {
        auto p = q.front();
        int i = p.first;
        int j = p.second;
        q.pop();
        
        image[i][j] = color;
        
        if((j+1<m) and image[i][j+1]==oldColor)
        {
            q.push({i,j+1});
        }
        
        if((j-1>=0) and image[i][j-1]==oldColor)
        {
            q.push({i,j-1});
        }
        if((i-1>=0) and image[i-1][j]==oldColor)
        {
            q.push({i-1,j});
        }
        if((i+1<n) and image[i+1][j]==oldColor)
        {
            q.push({i+1,j});
        }
    }

    return image;
    }
};