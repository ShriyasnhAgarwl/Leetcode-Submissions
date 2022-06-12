class Solution {
public:
    int arrangeCoins(int n) {
        long long low = 0 ;
        long long high = n ;
        long long ans;
        while(low<=high)
        {
            ans=  low + ( high - low )/2 ;
            if( ans*(ans+1)/2 == n) return (int)ans ;
            else if(ans*(ans+1)/2 < n) low = ans + 1 ;
            else high= ans - 1;
        }
        return (int)high;
    }
};