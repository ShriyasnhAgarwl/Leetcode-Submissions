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
    void inorder(TreeNode* root)
    {
        if(!root) return;
        inorder(root->left);
        tree.push_back(root->val);
        inorder(root->right );
    }
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        unordered_set<int> s;
        for(int i=0;i<tree.size();i++)
        {
            if(s.count(k-tree[i])) return true;
            s.insert(tree[i]);
            
        }
        return false;
    }
    private: vector<int> tree;
};