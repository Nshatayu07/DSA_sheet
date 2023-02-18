//{ Driver Code Starts
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
    
    struct Node* reverse(Node* head){
        Node* p = head;
        Node* q = NULL;
        Node* r = NULL;
        while(p!=NULL){
            r=q;
            q=p;
            p=p->next;
            q->next = r;
        }
        head = q;
        
        return head;
    }
    
    struct Node* add(Node* first, Node* second){
        int carry = 0;
        Node* temp = new Node(0);
        Node* cur  = temp;
        
        while(first!=NULL and second!=NULL){
            int sum = first->data + second->data + carry;
            carry = sum/10;
            Node* n = new Node(sum%10);
            cur->next=n;
            cur=cur->next;
            first = first->next;
            second = second->next;
        }
        
        while(first){
            int sum = first->data + carry;
            carry = sum/10;
            Node* n = new Node(sum%10);
            cur->next=n;
            cur=cur->next;
            first = first->next;
        }
        
        while(second){
            int sum = second->data + carry;
            carry = sum/10;
            Node* n = new Node(sum%10);
            cur->next=n;
            cur=cur->next;
            second = second->next;
        }
        if(carry){
            Node* n = new Node(carry);
            cur->next=n;
            cur=cur->next; 
        }
        
        return temp->next;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node* firstr = reverse(first);
        Node* secondr = reverse(second);
        
        Node* ans = add(firstr, secondr);
        
        Node* ansr = reverse(ans);
        
        return ansr;
    }
};


//{ Driver Code Starts.

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