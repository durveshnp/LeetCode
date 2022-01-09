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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *cur = head,*front,*end = head,*prev1,*prev2,*nxt1,*nxt2;
        
        
        for(int i=1;i<k;i++)
        {
            cur = cur->next;
        }
        
        front = cur;
        cur = cur->next;
        
        while(cur != NULL)
        {
            end = end->next;
            cur = cur->next;
        }
        
        swap(front->val,end->val);
        
        return head;
    }
};