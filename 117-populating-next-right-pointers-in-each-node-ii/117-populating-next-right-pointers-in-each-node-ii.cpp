/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        Node *cur, *tail, *head;
    
        cur = root;
        head = tail = NULL;
        
        while(cur)
        {
            if(cur->left)
            {
                if(tail) 
                    tail = tail->next = cur->left;
                else 
                    head = tail = cur->left;
            }
                
            if (cur->right)
            {
                if(tail) 
                    tail = tail->next = cur->right;
                else 
                    head = tail = cur->right;
            }
                
            if(!(cur = cur->next))
            {
                cur = head;
                head = tail = NULL;
            }
        }
        return root;
    }
};