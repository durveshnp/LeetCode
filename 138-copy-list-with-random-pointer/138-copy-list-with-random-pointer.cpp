/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if(head == NULL) 
            return NULL;
        
        Node* n;
        Node* copy;
        Node *tmp = head;
       
        while(tmp)
        {
            copy = new Node(tmp->val);
            copy->next = tmp->next;
            tmp->next = copy;
            tmp = copy->next;
        }
        
        n = head->next;
        tmp = head;
        
        while(tmp)
        {
            if(tmp->random == NULL)
                tmp->next->random = NULL;
            
            else 
                tmp->next->random = tmp->random->next;
            
            tmp = tmp->next->next;
        }
        
        tmp = head;
        
        
        while(tmp)
        {
            copy = tmp->next;
            tmp->next = copy->next;
            
            if(copy->next)
                copy->next = copy->next->next;
            
            tmp = tmp->next;
        }
        
        return n;
    }
};