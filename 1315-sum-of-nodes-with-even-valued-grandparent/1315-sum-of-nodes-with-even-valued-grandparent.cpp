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
    int sumEvenGrandparent(TreeNode* root) {
        return solve(root,NULL, NULL);
        
        
    }
    int solve(TreeNode* root, TreeNode* p, TreeNode* gp)
    {
        if(root==NULL)
        {
            return 0;
        }
        int ans=0;
        if(gp && (gp->val)%2==0)
        {
            ans+=root->val;
        }
        ans=ans+solve(root->left,root,p) + solve(root->right,root,p);
        return ans;
    }
};