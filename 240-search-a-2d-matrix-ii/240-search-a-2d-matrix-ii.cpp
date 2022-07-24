class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // int n1=matrix.size(), n2=matrix[0].size();
        // int i =n1-1, j=0;
        // while(i>=0 && j<n2)
        // {
        //     if(matrix[i][j] == target)
        //     {
        //         return true;
        //     }
        //     else if(matrix[i][j]> target )
        //     {
        //         i--;
        //     }
        //     else
        //     {
        //         j++;
        //     }
        // }
        // return false;
        
        int m=matrix.size(), n=matrix[0].size();
        int low, high, mid;
        for(int i =0;i<m;i++)
        {
            if(matrix[i][0]<=target && matrix[i][n-1]>=target)
            {
                low=0;
                high=n;
                
                while(low<high)
                {
                    mid=(low+high)/2;
                    if(matrix[i][mid] == target)
                    {
                        return true;
                    }
                    else if( matrix[i][mid]<target)
                    {
                        low=mid+1;
                    }
                    else
                    {
                      high=mid;   
                    }
                }
            }
        }
        return false;
    }
};