class Solution {
public:
    int first(vector<int>& nums, int target)
    {
        int start=0, end=nums.size()-1 , ans=-1;
        while(start<=end)
        {
        int mid= (start+end)/2;
        if(nums[mid] == target)
        {
            ans=mid;
            end=mid-1;
        }
        else if(nums[mid]<target)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        }
        return ans;
    }
    int last(vector<int>& nums, int target)
    {
        int start=0, end=nums.size()-1 , ans=-1;
        while(start<=end)
        {
        int mid= (start+end)/2;
        if(nums[mid]==target)
        {
            ans=mid;
            start= mid+1;
        }
        else if(nums[mid]<target)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        return {first(nums,target),last(nums,target)};
        
    }
};