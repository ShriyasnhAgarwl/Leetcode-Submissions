class Solution {
public:
   
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
       int ans=INT_MIN;
        reverse(nums2.begin(),nums2.end());
        for(int i=0;i<nums1.size();i++)
        {
           int idx= lower_bound(nums2.begin(),nums2.end(),nums1[i])-nums2.begin();
            if(idx>=nums2.size())
                continue;
            int j =nums2.size()-idx-1;
            if(j>=i)
            {
                ans=max(ans,j-i);
            }
        }
        if(ans==INT_MIN)
            return 0;
        return ans ;
    }
};