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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<ListNode *> stk1,stk2;
        ListNode *head = NULL;
        int carry = 0;
        while(l1)
        {
            stk1.push(l1);
            l1 = l1->next;
        }
        
        while(l2)
        {
            stk2.push(l2);
            l2 = l2->next;
        }
        
        while(!stk1.empty() && !stk2.empty())
        {
            int sum = carry + stk1.top()->val + stk2.top()->val;
            stk1.pop();
            stk2.pop();
            if(sum > 9)
            {
                sum = sum%10;
                carry = 1;
            }
            else
                carry = 0;
            
            ListNode *tmp = new ListNode(sum);
            tmp->next = head;
            head = tmp;
        }
        
        while(!stk1.empty())
        {
            int sum = carry + stk1.top()->val;
            stk1.pop();
            if(sum > 9)
            {
                sum = sum%10;
                carry = 1;
            }
            else
                carry = 0;
            
            ListNode *tmp = new ListNode(sum);
            tmp->next = head;
            head = tmp;
        }
        
        while(!stk2.empty())
        {
            int sum = carry + stk2.top()->val;
            stk2.pop();
            if(sum > 9)
            {
                sum = sum%10;
                carry = 1;
            }
            else
                carry = 0;
            
            ListNode *tmp = new ListNode(sum);
            tmp->next = head;
            head = tmp;
        }
        
        if(carry == 1)
        {
            ListNode *tmp = new ListNode(1);
            tmp->next = head;
            head = tmp;
        }
        
        return head;
    }
};
















