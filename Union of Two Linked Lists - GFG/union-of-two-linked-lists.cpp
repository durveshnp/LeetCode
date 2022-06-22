// { Driver Code Starts
#include<bits/stdc++.h>
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

struct Node* makeUnion(struct Node* head1, struct Node* head2);

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
        
        printList(makeUnion(first,second));
    }
    return 0;
}
// } Driver Code Ends


/*
// structure of the node is as follows

struct node
{
	int data;
	struct node* next;
	
	node(int x){
	    data = x;
	    next = NULL;
	}
	
};

*/

struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    // code here
    set<int>st;
   Node*curr1 = head1, *curr2 = head2;
  while(curr1 || curr2)
  {
      if(curr1)
      {
          st.insert(curr1->data);
          curr1 = curr1->next;
      }
      
      if(curr2)
      {
          st.insert(curr2->data);
          curr2 = curr2->next;
      }
  }
  curr1 = head1;
  while(curr1->next)
  {
      curr1 = curr1->next;
  }
  curr1->next = head2;
  curr1 = head1; curr2 = NULL;
  for(auto i : st) {
  curr1->data = i;
  curr2 = curr1;
  curr1 = curr1->next;
  }
  curr2->next = NULL;
  return head1;
}
