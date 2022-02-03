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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL)
            return NULL;
        
        ListNode* cur = head;
        ListNode* next = NULL;
        ListNode* prev = NULL;
        int count = 0;
        
        ListNode *size = head;
        for(int i=0;i<k;i++)
        {
            if(size==NULL)
                return head;
            size = size->next;
        }
    
        while (cur != NULL && count < k) 
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
            count++;
        }
     
        if (next != NULL)
            head->next = reverseKGroup(next, k);
     
        return prev;
    }
};