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


    void LevelOrder(Node* node){
    if(node == NULL)
      {
          return;
      }
      queue<Node*> q;
      q.push(node);
      q.push(NULL);
      while(!q.empty()){
          Node* curr = q.front();
          q.pop();
          if(curr != NULL){
              cout<<curr->data<<" ";
              if(curr->left != NULL){
                  q.push(curr->left);
              }
              if(curr->right != NULL){
                  q.push(curr->right);
              }
          }
          else if(!q.empty()){
              q.push(NULL);
          }
      }
    }

void inOrder(struct Node* node)
{
  if (node == NULL)
    return;

  inOrder(node->left);
  cout<<node->data;

  inOrder(node->right);
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
    LevelOrder(root);
  return 0;
}
