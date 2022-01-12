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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL)
        {
            return NULL; 
        }
        
        ListNode *slow = head;
        ListNode *prev;
        ListNode *fast = head;
        
        for(int i=1;i<=n;i++)
            fast = fast->next;
        
        while(fast)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next;
        }
        if(slow == head)
        {
            head = head->next;
            return head;
        }
        prev->next = slow->next;
        return head;
    }
};