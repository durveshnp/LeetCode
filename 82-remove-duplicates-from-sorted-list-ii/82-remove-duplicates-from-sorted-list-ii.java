/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        if(head == null || head.next == null)
            return head;
        int val = head.val;
        ListNode tmp = head.next;
        
        if(val != tmp.val)
        {
            head.next = deleteDuplicates(tmp);
            return head;
        }
        else
        {
            while(tmp != null && tmp.val == val)
                tmp = tmp.next;
            return deleteDuplicates(tmp);
        }
    }
}