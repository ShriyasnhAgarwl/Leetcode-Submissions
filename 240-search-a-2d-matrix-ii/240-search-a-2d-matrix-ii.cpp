class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n1=matrix.size(), n2=matrix[0].size();
        int i =n1-1, j=0;
        while(i>=0 && j<n2)
        {
            if(matrix[i][j] == target)
            {
                return true;
            }
            else if(matrix[i][j]> target )
            {
                i--;
            }
            else
            {
                j++;
            }
        }
        return false;
    }
};