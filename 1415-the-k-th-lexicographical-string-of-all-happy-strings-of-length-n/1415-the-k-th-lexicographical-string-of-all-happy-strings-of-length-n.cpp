class Solution {
public:
    string res; int K;
    
    void solve(int n, string& curr){
        if(n==0){
            K--;
            if(K==0) res = curr; 
            return;
        }
        if(res!="") return;
        string temp = "abc";
        for(char c: temp){
            if(curr!="" && curr.back() == c) continue;
            curr.push_back(c);
            solve(n-1, curr);
            curr.pop_back();
        }
    }
    string getHappyString(int n, int k) {
        res = "";
        K = k;
        string curr = "";
        solve(n, curr);
        return res;
    }
};