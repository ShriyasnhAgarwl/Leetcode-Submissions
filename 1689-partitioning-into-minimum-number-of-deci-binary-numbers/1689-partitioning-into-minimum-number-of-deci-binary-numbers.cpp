class Solution {
public:
    int minPartitions(string n) {
        int max_digit=0;
        for(char x:n)
        {
            max_digit = max(max_digit, x-'0');
        }
        return max_digit;
    }
};