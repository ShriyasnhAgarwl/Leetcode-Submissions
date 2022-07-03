// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int m=0, c=-1;
        while(m<=n)
        {
            int mid= m+(n-m)/2;
            if(isBadVersion(mid))
            {
                n=mid-1;
                c= mid;
            }
            else
            {
                m=mid+1;
            }
        }
        return c;
    }
};
