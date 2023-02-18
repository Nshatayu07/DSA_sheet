//{ Driver Code Starts
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
    void reverse(Node* head){
        Node* p = head;
        Node* q = NULL;
        Node* r = NULL;
        
        while(p!=NULL){
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }
        head = q;
        
        // return head;
    }
    
    
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        // string s;
        Node* t = head;
        reverse(t);
        
        int carry=1;
        while(t!=NULL){
            int s = t->data + carry;
            carry = s/10;
            // cout<<carry;
            t->data = s%10;
            // cout<<t->data;
            t=t->next;
        }
        
        if(carry){
            Node* n = new Node(carry);
            t->next = n;
            t = t->next;
        }
        
        reverse(t);
        
        return t;
    }
};

//{ Driver Code Starts.

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