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
    bool ltor = true;
    
    void bfs(TreeNode *root,vector<vector<int>> &res)
    {
        queue<TreeNode *> q;
        q.push(root);
        
        while(q.empty() == false)
        {
            vector<int> row;
            int n = q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode *tmp = q.front();
                q.pop();
                if(ltor)
                {
                    row.push_back(tmp->val);
                }
                else
                {
                    row.insert(row.begin(),tmp->val);
                }
                if(tmp->left)
                    q.push(tmp->left);
                if(tmp->right)
                    q.push(tmp->right);
            }
            ltor = !ltor;
            res.push_back(row);
        }
    }
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
          vector<vector<int>> res;
        if(root == NULL)
            return res;
      
        bfs(root,res);
        
        return res;
    }
};