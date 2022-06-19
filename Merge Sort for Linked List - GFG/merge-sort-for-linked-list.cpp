// { Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    
    
    Node* merge(Node* h1,Node* h2)
    {
        if(h1 == NULL)
            return h2;
        if(h2 == NULL)
            return h1;
        
        if(h1->data < h2->data)
        {
            h1->next = merge(h1->next,h2);
            return h1;
        }
        else
        {
            h2->next = merge(h1,h2->next);
            return h2;
        }
    }
    
    Node* mergeSort(Node* head) {
        // your code here
        
        if(head == NULL || head->next == NULL)
            return head;
            
        Node *slow = head, *fast = head->next->next;
        
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        Node *r = mergeSort(slow->next);
        slow->next = NULL;
        Node *l = mergeSort(head);
        
        return merge(l,r);
        
    }
};


// { Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}  // } Driver Code Ends