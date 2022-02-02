class MyLinkedList {
public:
    struct Node {
        
        int val;
        Node* next;
        
        Node(int d)
        {
            val = d;
            next = NULL;
        }
    };
    
    Node* root;
    
    MyLinkedList() {
        root = NULL;
    }
    
    int get(int index) {
        if(root == NULL)
            return -1;
        Node *cur = root;
        int cnt = 0;
        
        while(cur && cnt < index)
        {
            cur = cur->next;
            cnt++;
        }
        
        if(cur == NULL)
            return -1;
        else
            return cur->val;
        
    }
    
    void addAtHead(int val) {
        Node *node = new Node(val);
        node->next = root;
        root = node;
    }
    
    void addAtTail(int val) {
        Node *cur = root;
        Node *node = new Node(val);
        if(root == NULL)
            root = node;
        else
        {
            while(cur->next)
            {
                cur = cur->next;
            }
            cur->next = node;
        }
    }
    
    void addAtIndex(int index, int val) {
        Node* cur = root;
        int cnt = 0;
        if(index == 0)
        { 
            addAtHead(val); 
        }
        
        while(cur != NULL)
        {
            if(cnt == index-1)
            {    
                Node* next = cur->next;
                cur->next = new Node(val);
                cur->next->next = next;
                
                return;
            } 
            
            cur = cur->next;
            cnt++;
        }
    }
    
    void deleteAtIndex(int index) {
        Node* cur = root;
        
        int cnt = 0;
        while(cur != NULL)
        {
            
            if(cnt == index-1)
            {    
                Node* toDelete = cur->next;   
                if(toDelete != NULL)
                {
                    Node* toDeleteNext = toDelete->next;
                    delete toDelete;
                    cur->next = toDeleteNext;
                    return;
                }
                return;
            } 
            else if(index == 0)
            {
                Node* updated_root = cur->next;
                delete cur;   
                cur = updated_root;
                root = cur;
                return;
            }
            
            cur = cur->next;
            cnt++;
        }
    }
};



/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */