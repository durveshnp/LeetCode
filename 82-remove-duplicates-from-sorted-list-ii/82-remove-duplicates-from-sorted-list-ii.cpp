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
    ListNode* deleteDuplicates(ListNode* head) {
      
        if (head == NULL || head->next == NULL)
            return head;
        int val = head->val;
        ListNode *tmp = head->next;
        
        if (tmp->val != val) 
        {
            head->next = deleteDuplicates(tmp);
            return head;
        } 
        else 
        {
            while (tmp && tmp->val == val) 
                tmp = tmp->next;
            return deleteDuplicates(tmp);
        }
    }
};