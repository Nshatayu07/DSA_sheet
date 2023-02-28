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

    v.push_back(node->data);
    solve(node->left, v);
    solve(node->right, v);

}

void solve(Node* node, vector<int> &v){
    stack<Node*> s;
    s.push(node);

    while(!s.empty()){
        Node* n = s.top();
        s.pop();

        v.push_back(n->data);

        if(n->right){
            s.push(n->right);
        }
        if(n->left){
            s.push(n->left);
        }

    }
}

int main(){

}