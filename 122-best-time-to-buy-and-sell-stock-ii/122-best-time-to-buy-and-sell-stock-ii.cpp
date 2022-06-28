class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        
        int curHold = INT_MIN, curNotHold = 0;
        
        for( const int stockPrice : prices ){
            
            int prevHold = curHold, prevNotHold = curNotHold;
            
            
            curHold = max( prevHold, prevNotHold - stockPrice );
            
            
            curNotHold = max( prevNotHold, prevHold + stockPrice );
        }
        
        
        return curNotHold;
    }
};
// class Solution {
// public:
//     int slv(vector<vector<int>>&dp, vector<int>&a, int i, int j) {
//         if(i>=a.size()) {
//             return 0;
//         }
//         if(dp[i][j]!=-1) {
//             return dp[i][j];
//         }
//         if(j==0) {
//             return dp[i][j] = max(-a[i] + slv(dp,a,i+1,1), slv(dp,a,i+1,0));
//         }
//         return dp[i][j] = max(a[i] + slv(dp,a,i+1,0), slv(dp,a,i+1,1));
//     }
//     int maxProfit(vector<int>& a) {
//         int n = a.size();
//         vector<vector<int>>dp(n,vector<int>(2,-1));
//         return slv(dp,a,0,0);
//     }
// };
