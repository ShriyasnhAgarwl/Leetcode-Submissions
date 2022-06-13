class Solution {
public:
   vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        vector<int> ans;
        unordered_map<int, int> mpp;        // mpp<element, counts>
        for(int i=0; i<m; i++)
        {
            mpp[nums1[i]]++;                 // storing counts of corresponding elements in array1
        }
        
        for(int i=0; i<n; i++)
        {
            auto it = mpp.find(nums2[i]);
            if(it != mpp.end() && it->second > 0)
            {
                ans.push_back(nums2[i]);
                it->second--;
            }
        }
        return ans;
    }

};