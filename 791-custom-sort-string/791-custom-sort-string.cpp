class Solution {
public:
    static bool cmp(pair<int,int> a, pair<int,int>b)
    {
        return  a.second<b.second;
    }
    string customSortString(string order, string s) {
        vector<pair<char,int>> v;
        vector<int> rank(26,INT_MAX);
        for(int i=0; i<order.size(); i++)
        {
            rank[order[i]-'a']=i;
        }
        int n=s.size();
        
        for(auto i : s)
        {
            v.push_back({i,rank[i-'a']});
            
        }
        
        sort(v.begin(),v.end(),cmp);
         
        string ans;
        for(auto it: v)
        {
            ans+=it.first;
        }
        return ans;
    }
};