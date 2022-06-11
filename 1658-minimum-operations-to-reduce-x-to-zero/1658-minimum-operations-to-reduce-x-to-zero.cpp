class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        unordered_map<int, int> mp;
        int sum=0;
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(mp.find(sum)==mp.end())
            {
                mp[sum]=i;
            }
            if(sum==x)
            {
                ans=min(ans,i+1);
            }
        }
        sum=0;
        int count=0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            sum+=nums[i];
            count++;
            if(sum==x)
            {
                ans=min(ans, count);
            }
            if(mp.find(x-sum)!=mp.end() && mp[x-sum]<i)
            {
                ans=min(ans, count + mp[x-sum] + 1 );
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};