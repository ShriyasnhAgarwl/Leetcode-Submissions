class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0;
        int high=arr.size()-1;
        int mid=0, ans=0;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
            {
                return mid;
            }
            else if(arr[mid]<arr[mid+1])
            {
                ans=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return ans;
    }
};