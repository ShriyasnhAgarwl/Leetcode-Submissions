class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto x:nums)
        {
            mp[x]++;
        }
        int temp=-1;
            int temp2;
        for(auto z:mp)
        {
            if(z.second>temp)
            {
                temp=z.second;
                temp2=z.first;
            }
        }
        return temp2;
        
    }
};