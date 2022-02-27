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
typedef unsigned long long int ll;

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) 
            return 0;
        
        queue<pair<TreeNode *, ll>> q;
        int res =0;
        q.push(make_pair(root, 0));
        
        while(!q.empty())
        {
            ll left_index = q.front().second, right_index = 0;
            ll sz = q.size();
            
            for(ll i=0; i<sz; i++)
            {
                
                pair<TreeNode *, ll> p = q.front();
                q.pop();
                TreeNode *temp = p.first;
                right_index = p.second;
                
                if(temp->left)
                    q.push(make_pair(temp->left, 2*right_index + 1));
                if(temp->right)
                    q.push(make_pair(temp->right, 2*right_index + 2));
                
            }
            
            res = max(res, int(right_index - left_index + 1));
        }
        
        return res;
    }
};