class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int front=0;
        int end=numbers.size()-1;
        vector<int> vec;
        while(front<end)
        {
            if(numbers[front]+numbers[end]==target)
            {
                vec.push_back(front+1);
                vec.push_back(end+1);
                break;
                }
            if(numbers[front]+numbers[end]>target)
            {
                end--;
            }
            else
            {
                front++;
            }
        }
       return vec;
    }
};
