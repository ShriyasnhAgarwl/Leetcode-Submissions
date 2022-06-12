class Solution {
    public:
    int countNegatives(vector<vector<int>>& grid) {
        int i=0;
        int j=grid[0].size()-1;
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        while(i<n && j>=0 )
        {
		   // if grid (i,j) is negative then all below it must  be negative since rows and colms are in decreasing order
            if(grid[i][j]<0)
            {
                cnt+=(n-i);
                j--;
            }
            else if(grid[i][j]>=0 )
            {
                i++;
            }
			//for better understanding dry run once
        }
        return cnt;
    }
};