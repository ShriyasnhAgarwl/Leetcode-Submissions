class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> modded(n);
        for(int i=0;i<n;i++)
        {
            modded[(i+k)%n]=nums[i];
        }
        nums=modded;
        
    }
};