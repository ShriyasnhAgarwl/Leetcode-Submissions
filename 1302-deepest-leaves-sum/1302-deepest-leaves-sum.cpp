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
    int sum=0;
    int overallheight=0;
    void solve(TreeNode* root, int height)
    {
        if(!root) return;
        if(height==overallheight)
        {
            sum+=root->val;
        }
        else if(height>overallheight)
        {
            overallheight++;
            sum=root->val;
        }
        solve(root->left,height+1);
        solve(root->right, height+1);
        
    }
    int deepestLeavesSum(TreeNode* root) {
        solve(root, 0);
        return sum;
    }
};