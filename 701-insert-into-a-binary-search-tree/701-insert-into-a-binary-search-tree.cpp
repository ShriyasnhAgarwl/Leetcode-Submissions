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
    void solve(TreeNode *root, int val, TreeNode *parent)
    {
        if(root == NULL)
        {
            if(val>parent->val)
            {
                parent->right= new TreeNode(val);
            }
            else
            {
                parent->left = new TreeNode(val);
            }
            return;
        }
        if(val > root->val)
        {
            solve(root->right,val,root);
        }
        else
        {
            solve(root->left,val,root);
        }
        
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL) {return new TreeNode(val);}
        else
        {
            solve(root,val, NULL);
        }
        return root;
        
    }
};