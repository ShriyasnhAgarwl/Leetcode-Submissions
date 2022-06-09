class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int i=0;
        int j=a.size()-1;
        vector<int> index(2,0);
        while(i<j)
        {
            if(a[i]+a[j]==target)
            {
                index[0]=i+1;
                index[1]=j+1;
                break;
            }
            else if((a[i]+a[j])>target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return index;
    }
};