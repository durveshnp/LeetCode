// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* l1, struct Node* l2)
    {
        // code here
        stack<struct Node *> stk1,stk2;
        struct Node *head = NULL;
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
            int sum = carry + stk1.top()->data + stk2.top()->data;
            stk1.pop();
            stk2.pop();
            if(sum > 9)
            {
                sum = sum%10;
                carry = 1;
            }
            else
                carry = 0;
            
            struct Node *tmp = new struct Node(sum);
            tmp->next = head;
            head = tmp;
        }
        
        while(!stk1.empty())
        {
            int sum = carry + stk1.top()->data;
            stk1.pop();
            if(sum > 9)
            {
                sum = sum%10;
                carry = 1;
            }
            else
                carry = 0;
            
            struct Node *tmp = new struct Node(sum);
            tmp->next = head;
            head = tmp;
        }
        
        while(!stk2.empty())
        {
            int sum = carry + stk2.top()->data;
            stk2.pop();
            if(sum > 9)
            {
                sum = sum%10;
                carry = 1;
            }
            else
                carry = 0;
            
            struct Node *tmp = new struct Node(sum);
            tmp->next = head;
            head = tmp;
        }
        
        if(carry == 1)
        {
            struct Node *tmp = new struct Node(1);
            tmp->next = head;
            head = tmp;
        }
        
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
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends