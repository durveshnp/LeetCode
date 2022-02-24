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
    ListNode* insertionSortList(ListNode* head) {
        ListNode *out = head;
        ListNode *in = head;
        ListNode *min = head;
        
        while(out != NULL)
        {
            in = out;
            min = out;
            
            while(in != NULL)
            {
                if(in->val < min->val)
                    min = in;
                in = in->next;
            }
            swap(min->val,out->val);
            out = out->next;
        }
        return head;
    }
};