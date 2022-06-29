class Solution {
public:
    vector<vector<int>> generate(int numRows)
    {
           vector<vector<int> > v;
          if(numRows==1)
              return {{1}};
          if(numRows==2)
              return {{1},{1,1}};
          v.push_back({1});
          v.push_back({1,1});
        
        int i;
        for(i=2; i<numRows; i++)
        {
            vector<int> prev=v[i-1];
            vector<int> curr;
            
            curr.push_back(1);
            int j;
            for(j=0; j<prev.size()-1; j++)
            {
                curr.push_back(prev[j]+prev[j+1]);
            }
            curr.push_back(1);
            v.push_back(curr);
        }
        return v;
    }
};