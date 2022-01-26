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
    
    void inorder(TreeNode *root,vector<int> &arr)
    {
        if(root == NULL)
            return;
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right,arr);
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> res;
        vector<int> l1,l2;
        inorder(root1,l1);
        inorder(root2,l2);
        
        int i = 0;
        int m = l1.size();
        int j = 0;
        int n = l2.size();
        
        while(i < m && j < n)
        {
            if(l1[i] < l2[j])
            {
                res.push_back(l1[i]);
                i++;
            }
            else
            {
                res.push_back(l2[j]);
                j++;
            }
        }
        
        while(i < m)
        {
            res.push_back(l1[i]);
            i++;
        }
        
        while(j < n)
        {
            res.push_back(l2[j]);
            j++;
        }
        
        return res;
    }
};











