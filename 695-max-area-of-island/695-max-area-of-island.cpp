class Solution {
public:
    
    int dfs(vector<vector<int>>& grid, int n, int m, int i, int j, vector<vector<bool>>& visited){
        if(i<0 or i>=n or j<0 or j>=m or visited[i][j] or grid[i][j]==0){
            return 0;
        }
        
        visited[i][j] = true;
        
        int area = 1;
        
        area += dfs(grid, n, m, i+1, j, visited);
        area += dfs(grid, n, m, i, j+1, visited);
        area += dfs(grid, n, m, i-1, j, visited);
        area += dfs(grid, n, m, i, j-1, visited);
        
        return area;
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        int result = 0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(not visited[i][j]){
                    result = max(result, dfs(grid, n, m, i, j, visited));
                }
            }
        }
        
        return result;
    }
};