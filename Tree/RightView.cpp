#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    public:
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;

    }
};


    void RightView(Node* node){
        if(node == NULL){
            return;
        }
       
        queue<Node*> q;
       q.push(node);
       
       while(!q.empty()){
           int n = q.size();
           for(int i = 0 ; i < n ; i++){
                Node* curr = q.front();
                q.pop();
                
                if(i == n-1){
                   cout<<curr->data<<" ";
                }
                if(curr->left != NULL){
                    q.push(curr->left);
                }
                if(curr->right != NULL){
                    q.push(curr->right);
                }
                
           }
       }
    }
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(7);
    RightView(root);
  return 0;
}
