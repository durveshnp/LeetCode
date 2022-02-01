/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a = headA;
        ListNode *b = headB;
        int cnta = 0, cntb = 0;
        
        while(a)
        {
            cnta++;
            a = a->next;
        }
        
        while(b)
        {
            cntb++;
            b = b->next;
        }
        
        int extra = abs(cnta-cntb);
        
        if(cnta > cntb)
        {
            while(extra--)
            {
                headA = headA->next;
            }
        }
        else
        {
            while(extra--)
            {
                headB = headB->next;
            }
        }
        
        while(headA != headB)
        {
            headA = headA->next;
            headB = headB->next;
        }
        
        return headA;
    }
};

















