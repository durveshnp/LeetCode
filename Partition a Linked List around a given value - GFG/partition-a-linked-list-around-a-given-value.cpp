// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node* partition(struct Node* head, int x);

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
int main(void) {
    int t;
    cin >> t;

    while (t--) {
        struct Node* head = NULL;
        struct Node* temp = NULL;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int value;
            cin >> value;
            if (i == 0) {
                head = new Node(value);
                temp = head;
            } else {
                temp->next = new Node(value);
                temp = temp->next;
            }
        }

        int k;
        cin >> k;

        // Solution ob;

        head = partition(head, k);
        printList(head);
    }

    return (0);
}
// } Driver Code Ends


// User function Template for C++

/*struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

struct Node* partition(struct Node* head, int x) {
    // code here
      Node* small=new Node(-1);
   Node* equal=new Node(-1);
   Node* large=new Node(-1);
   Node *p=small;
   Node *q=equal;
   Node *r=large;
   while(head!=NULL)
   {
       if(head->data<x)
           {
               small->next=head;
               small=small->next;
           }
       else
       if(head->data==x)
           {
               equal->next=head;
               equal=equal->next;
           }
       else
       {
           large->next=head;
           large=large->next;
       }
       Node* temp=head->next;
       head->next=NULL;
       head=temp;
   }
 //  return r->next;
   if(p->next==NULL)
   {
       if(q->next && r->next)
       {
           equal->next=r->next;
           return q->next;
       }
       else
       if(q->next==NULL && r->next)
       {
           return r->next;
       }
       return q->next;
   }
   else
   {
       if(q->next && r->next)
       {
           small->next=q->next;
           equal->next=r->next;
           return p->next;
       }
       else
       if(q->next==NULL && r->next)
       {
           small->next=r->next;
           return p->next;
       }
       else
       {
           small->next=q->next;
           return p->next;
       }
   }
   return NULL;
}