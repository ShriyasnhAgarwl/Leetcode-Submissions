class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int s = nums.size();
        vector<int> modded(s);
        for(int i = 0; i < s; i++) modded[(i+k)%s] = nums[i];
        nums = modded;
    }
};