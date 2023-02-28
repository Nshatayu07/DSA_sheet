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
    solve(node->right, v);
    v.push_back(node->data);

}

void solve(Node* node, vector<int> &v){
    stack<Node*> s;
    s.push(node);

    while(!s.empty()){
        Node* n = s.top();

        if(n->right) n=n->right;
        if(n->left) n=n->left;

        v.push_back(n->data);
        s.pop();
    }
}

int main(){

}