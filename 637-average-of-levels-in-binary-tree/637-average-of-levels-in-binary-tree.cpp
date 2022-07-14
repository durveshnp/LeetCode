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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        
        queue<TreeNode*> q;
        
        q.push(root);
        
        while(!q.empty())
        {
            int sz = q.size();
            long long sum = 0;
            
            for(int i=0;i<sz;i++)
            {
                TreeNode *tmp = q.front();
                q.pop();
                sum += (long long)tmp->val;
                
                if(tmp->left)
                    q.push(tmp->left);
                if(tmp->right)
                    q.push(tmp->right);
            }
            
            double avg = (double)sum/sz;
            res.push_back(avg);
            
        }
        return res;
    }
};