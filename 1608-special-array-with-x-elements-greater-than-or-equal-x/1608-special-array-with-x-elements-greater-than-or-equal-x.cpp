class Solution {
public:
    bool check(int val , vector<int>&nums)
    {
        int cnt= 0;
        for(auto it : nums)
        {
            if(val<=it)
            {
                cnt++;
            }
        }
        return val==cnt;
    }
    bool check1(int val , vector<int>&nums)
    {
        int cnt= 0;
        for(auto it : nums)
        {
            if(val<=it)
            {
                cnt++;
            }
        }
        return val<cnt;
    }
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        int max1 = *max_element(nums.begin(),nums.end());
        int l = 0 , h = max1;
        int ans = -1;
        while(l<=h)
        {
            int mid = l + (h-l)/2;
            // cout << "mid " << mid << endl;
            if(check(mid,nums))
            {
                ans = mid;
                break;
            }
            if(check1(mid,nums))
            {
                l = mid+1;
            }
            else
            {
                h = mid-1;
            }
        }
        return ans;
    }
};