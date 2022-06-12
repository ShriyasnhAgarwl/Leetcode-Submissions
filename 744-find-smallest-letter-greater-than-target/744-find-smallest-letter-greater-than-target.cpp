class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int low = 0, high=letters.size()-1;
        char res;
        if(target >=letters[high]) return letters[0];
        while(low<=high)
        {
            int mid= (low+high)/2;
            if(letters[mid]<=target) low=mid+1;
            else if(letters[mid] > target)
            {
                high=mid-1;
                res=letters[mid];
            }
        }
        return res;
        
    }
};