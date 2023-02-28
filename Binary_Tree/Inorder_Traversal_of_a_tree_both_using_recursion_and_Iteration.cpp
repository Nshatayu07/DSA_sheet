#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};

void solve(Node* node, vector<int> &v){
    if(node==NULL){
        return ;
    }

    solve(node->left, v);
    v.push_back(node->data);
    solve(node->right, v);

}

void solve(Node* node, vector<int> &v){
    stack<Node*> s;
    Node* n = node;

    while(!s.empty() || n!=NULL){
        if(n!=NULL){
            s.push(n);
            n=n->left;
        }
        else{
            n = s.top();
            v.push_back(n->data);
            s.pop();
            n=n->right;
        }
    }
}

int main(){

}