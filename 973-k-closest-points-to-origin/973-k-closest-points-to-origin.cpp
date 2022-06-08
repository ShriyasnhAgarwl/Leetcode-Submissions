class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b)
    {
        if(sqrt(a[0]*a[0]+a[1]*a[1])<sqrt(b[0]*b[0]+b[1]*b[1]))
            return true;
        return false;
        
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        sort(points.begin(), points.end(), comp);
        return vector<vector<int>>(points.begin(), points.begin()+k);
    }
};