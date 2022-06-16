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
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL )
            return { };
        unordered_map<int, int > m;
        vector<int> ans;
        solve(root, m, ans,0);
        return ans;
    }
    void solve(TreeNode* root,unordered_map<int, int> &m, vector<int> &ans, int level)
    {
        if(!root) return ;
        if(m.find(level) == m.end())
        {
            ans.push_back(root->val);
            m[level]=1;
        }
        solve(root->right, m , ans, level+1);
        solve(root->left, m , ans, level+1);
    }
};