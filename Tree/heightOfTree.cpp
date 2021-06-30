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

int height(struct Node* node){
        // code here 
        if(node == NULL){
            return 0;
        }
        int rHeight = height(node->right);
        int lHeight = height(node->left);
        return max(rHeight,lHeight)+1;
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
    root->right->right->left = new Node(8);
    
    cout<<height(root);
  return 0;
}
