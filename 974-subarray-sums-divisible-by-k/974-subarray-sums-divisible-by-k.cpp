class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<long long,int> mp;
        long long sum=0;
        mp[0]=1;
        int ans=0;
        for(auto x: nums)
        {
            sum+=x;
            long long rem=sum%k;
            if(rem<0) rem+=k;
            ans+=mp[rem];
            mp[rem]++;
        }
        
        return ans;
    }
};