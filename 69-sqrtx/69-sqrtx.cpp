class Solution {
public:
    int mySqrt(int x) {
        long long int low=1;
        long long int high=x;
        long long int ans=0;
        if(low*low==x) return low;
        if(high*high==x) return high;
        while(low<=high)
        {
            long long int mid=(high+low)/2;
            
             if((mid*mid)==x) 
                 return mid;
            
            else if((mid*mid)>x) high=mid-1;
            else
            {
                if((mid+1)*(mid+1)> x && mid*mid <x)
                    return mid;
                low=mid+1;
                
            }
            
        }
        return ans;
    }
};