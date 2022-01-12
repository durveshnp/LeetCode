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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL)
        {
            head = NULL;
            return NULL;
        }
        
        ListNode *mid = head;
        ListNode *fast = head;
        ListNode *prev;
        
        while(fast && fast->next)
        {
            prev = mid;
            mid = mid->next;
            fast = fast->next->next;
        }
        
        ListNode *tmp = mid;
        prev->next = mid->next;
        delete tmp;
        return head;
    }
};