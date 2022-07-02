class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
      int total = mat.size()*mat[0].size();
        if(total!=r*c)
        {
            return mat;
        }
        else
           { vector<vector<int>> newmatrix;
        vector<int> vec;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                vec.push_back(mat[i][j]);
            }
        }
        int cnt=0;
        for(int i=0;i<r;i++)
        {
            vector<int> v;
            for(int j=0;j<c;j++)
            {
                v.push_back(vec[cnt++]);
            }
            newmatrix.push_back(v);
        }
        return newmatrix;
    }
    }
};