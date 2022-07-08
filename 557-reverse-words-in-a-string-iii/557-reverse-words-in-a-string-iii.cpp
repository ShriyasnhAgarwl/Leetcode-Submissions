class Solution {
public:
    string reverseWords(string s) {
        string x="";
        vector<string> v;
        for(int i =0;i<s.length();i++)
        {
         if(s[i]==' ')
         {
             v.push_back(x);
             x="";
         }
        else if(i==s.length()-1)
        {
           x+=s[i];
            v.push_back(x);
        }
            
        else
        {
         x+=s[i];   
        }
        }
        string z="";
        for(int i=0;i<v.size();i++)
        {
            string y=v[i];
            int low=0;
            int high=y.length()-1;
            while(low<high)
            {
                swap(y[low++],y[high--]);
            }
            if(i!=v.size()-1)
               y=y+" ";
            z+=y;
        }
        return z;
        
    }
};