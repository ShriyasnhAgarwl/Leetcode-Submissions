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
    TreeNode* pruneTree(TreeNode* root) {
        if(contains(root))
        {
            return root;
        }
        return NULL;
        
    }
    bool contains(TreeNode* root){
        if(root == NULL)
        {
            return 0;
        }
        bool left = contains(root->left);
        bool right = contains(root->right);
        if(left == false) root->left = NULL;
        if(right ==false) root->right= NULL;
        
        return (root->val==1)||left||right;
    }
};