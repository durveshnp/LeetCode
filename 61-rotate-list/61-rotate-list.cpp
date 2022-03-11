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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL) 
            return NULL;
        
        ListNode *tmp = head;
        ListNode *ans = head;
      
        int size=1;
        
        while(head->next)
        { 
            head=head->next;
            size++;
        }
        
      
        head->next=tmp;
        k=k%size;
        k=size-k-1;
        
        while(k>0)
        {
            ans = ans->next;
            k--;
        }
    
        tmp = ans;
        ans = ans->next;
        tmp->next = NULL;
        
        return ans;
    }
};