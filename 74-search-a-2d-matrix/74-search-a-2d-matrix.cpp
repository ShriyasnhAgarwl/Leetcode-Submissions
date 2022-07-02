// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         for(int i=0 ; i<matrix.size();i++)
//         {
//             for(int j=0;j<matrix[0].size();j++)
//             {
//                 if(matrix[i][j]==target)
//                 {
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowsize =  matrix.size(),
            colsize = matrix[0].size(),
            row=0 , col=colsize-1;
        
        while(row<rowsize && col>-1)
        {
            int curr=matrix[row][col];
            if(curr==target) return true;
            if(target>curr) row++;
            else col--;
        }

        
        return false;
    }
};

