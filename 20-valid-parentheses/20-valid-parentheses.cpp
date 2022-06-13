class Solution {
public:
    bool correct(char a, char b)
    {
        if(a=='(' && b==')' ||a=='{' && b=='}'||a=='[' && b==']' )
            return true;
        return false;
    }
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty()) return false;
                else if(correct(st.top(),s[i])==false) return false;
                else st.pop();
            }
        }
        return (st.empty()==true);
    }
};