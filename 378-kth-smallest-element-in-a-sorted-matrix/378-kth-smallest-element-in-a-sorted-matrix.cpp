class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int m = matrix[0].size();
        int a[n*m];
        int z=0 ;
        for(int i =0;i<n;i++)
        {
            for(int j = 0 ; j<m;j++)
            {
                a[z]=matrix[i][j];
                z++;
            }
        }
        sort(a,a+(n*m));
        return a[k-1];
    }
};