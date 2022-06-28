// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int firstBuy = INT_MAX, secondBuy = INT_MAX, firstProfit = 0, secondProfit = 0;
//         for(int currPrice: prices) {
//             firstBuy = min(firstBuy, currPrice);
//             firstProfit = max(firstProfit, currPrice - firstBuy);
//             secondBuy = min(secondBuy, currPrice - firstProfit);
//             secondProfit = max(secondProfit, currPrice - secondBuy);
//         }
//         return secondProfit;
//     }
// };
class Solution {
public:
    int slv(vector<vector<vector<int>>> &dp, vector<int> &a, int i, int j, int k) {
        if(i>=a.size() || k<=0) {
            return 0;
        }
        if(dp[i][j][k]!=-1) {
            return dp[i][j][k];
        }
        if(j==0) {
            return dp[i][j][k] = max(-a[i] + slv(dp,a,i+1,1,k), slv(dp,a,i+1,0,k));
        }
        return dp[i][j][k] = max(a[i] + slv(dp,a,i+1,0,k-1), slv(dp,a,i+1,1,k));
    }
    int maxProfit(vector<int>& a) {
        int n = a.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        return slv(dp,a,0,0,2);
    }
};
