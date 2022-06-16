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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> mp;
        for(int i=0;i<inorder.size();i++)
        {
            mp[inorder[i]]=i;
        }
        int pidx=0;
        return solve(mp, preorder, 0, inorder.size()-1,pidx);
    }
    TreeNode* solve(unordered_map<int,int> &mp, vector<int> &preorder, int i, int j, int &pidx)
    {
        if(i>j)
        {
            return NULL;
        }
        TreeNode * tp = new TreeNode(preorder[pidx]);
        
        int index=mp[preorder[pidx]];
        pidx++;
        tp->left = solve(mp,preorder,i,index-1,pidx);
        tp->right = solve(mp,preorder,index+1,j,pidx);
        return tp;
    }
};