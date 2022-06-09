class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++)
        {
            int x = 0-nums[i];
            int front=i+1;
            int back=nums.size()-1;
            while(front < back)
            {
                if(nums[front]+nums[back]<x)
                front++;
            else if(nums[front]+nums[back]>x)
                back--;
                else
            {
                vector<int> v(3,0);
                v[0]=nums[i];
                v[1]=nums[front];
                v[2]=nums[back];
                ans.push_back(v);
                while(front<back && nums[front]==v[1])
                    front++;
                while(front<back && nums[back]==v[2])
                    back--;
            }
    }
        while(i+1 < nums.size() && nums[i]==nums[i+1])
            i++;
}
    return ans;
}
};