typedef long long ll;
class Solution {
public:
    ll slv(ll n,ll e,vector<vector<ll>> &dp) {
        if(e==1) {
            return n;
        }
        if(n==1) {
            return 1;
        }
        if(dp[n][e]!=-1) {
            return dp[n][e];
        }
        ll ans=INT_MAX;
        for(int x=1;x<n;x++) {
            ll v=1+max(slv(n-x,e,dp),slv(x-1,e-1,dp));
            ans=min(v,ans);
        }
        return dp[n][e]=ans;
    }
    int twoEggDrop(int n) {
        int e=2;
        vector<vector<ll>>dp(n+1,vector<ll>(e+1,-1));
        return slv(n,e,dp);
    }
};
