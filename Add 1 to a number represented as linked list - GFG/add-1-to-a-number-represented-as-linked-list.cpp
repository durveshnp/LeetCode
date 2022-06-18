// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
    Node* rev(Node *head)
    {
        Node *cur = head;
        Node *prev = NULL;
        Node *nxt = NULL;
        
        while(cur)
        {
            nxt = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nxt;
        }
        
        head = prev;
        return head;
        
    }
    
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        
        head = rev(head);
        
        Node *cur = head;
        Node *prev = NULL;
        int carry = 1;
        
        while(carry && cur)
        {
            if(cur->data == 9)
            {
                cur->data = 0;
                carry = 1;
                prev = cur;
                cur = cur->next;
            }
            else
            {
                cur->data = cur->data + 1;
                carry = 0;
            }
            
        }
        
        if(carry)
        {
            prev->next = new Node(1);
        }
        
        head = rev(head);
        
        return head;
        
        
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends