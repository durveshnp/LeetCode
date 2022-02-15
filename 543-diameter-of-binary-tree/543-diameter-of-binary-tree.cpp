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
    int depth(TreeNode* root,int &res)
    {
        if(root == NULL)
            return 0;
        
        int l = depth(root->left,res);
        int r = depth(root->right,res);
        
        int diameter = l+r;
        res = max(res,diameter);

        if(l > r)
            return 1+l;
        else
            return 1+r;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        depth(root,res);
        
        return res;
    }
};