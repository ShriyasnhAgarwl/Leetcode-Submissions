class Solution {
public:
    bool hasmatch( string &st, string s)
    {
        int pos = 1;
        int i=s.find(st[0]);
        if(i== -1 )
        {
            return false;
        }
        
        while(pos<st.length())
        {
            i=s.find(st[pos],i+1);
            if(i==-1)
            {
                return false;
            }
            pos++;
        }
        return true;
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        int count=0;
        for(string str: words)
        {
            if(hasmatch(str,s))
            {
                count++;
            }
        }
        return count;
    }
};