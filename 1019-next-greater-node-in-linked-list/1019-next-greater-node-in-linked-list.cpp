/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        stack<int> stk;
        vector<int> values;
        for (auto node = head; node; node = node->next) 
        {
            values.push_back(node->val);
        }
        
        vector<int> res(values.size(), 0);
        for (int i = 0; i < values.size(); i++) 
        {
            while (!stk.empty() && values[i] > values[stk.top()])            
            {
                res[stk.top()] = values[i];
                stk.pop();
            }
            stk.push(i);
        }
        return res;
    }
};