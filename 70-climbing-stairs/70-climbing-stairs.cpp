class Solution {
public:
    int climbStairs(int n) {
       int a=0,b=0,c=1;
        for(int i=1;i<=n;i++)
        {
            a=b+c;
            b=c;
            c=a;
        }
        return a;
    }
};