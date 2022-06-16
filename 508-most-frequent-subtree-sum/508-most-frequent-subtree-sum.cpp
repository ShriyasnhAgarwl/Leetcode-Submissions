/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> findFrequentTreeSum(TreeNode* root) {
int mxfreq=0;
        unordered_map<int,int> freqMap;
        int tp= solve(root, mxfreq,freqMap);
        vector<int> ans;
        for(auto it : freqMap)
        {
            if(it.second == mxfreq)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
    int solve(TreeNode *root, int &maxfreq, unordered_map<int,int>  &freqMap)
    {
        if(root==NULL)
           { return 0;}
        int lt = solve(root->left, maxfreq, freqMap);
        int rt = solve(root->right, maxfreq, freqMap);
        int v = lt+ rt + root->val;
        freqMap[v]++;
        maxfreq= max(maxfreq, freqMap[v]);
        return v;
    }
};