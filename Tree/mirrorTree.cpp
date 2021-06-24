#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
struct node {
    public:
    int data;
    node* left;
    node* right;
    
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
void inorder(node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

node* mirrorTraverse(node* root){
    if(root == NULL){
        return root;
    }
    node* temp = root->left;
    root->left = root->right;
    root->right = temp;
    
    mirrorTraverse(root->left);
    mirrorTraverse(root->right);
    
    
}

int main() {
	// your code goes here
	node * root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->left->right = new node(5);
	root->right->left = new node(6);
	root->right->right = new node(7);
	//cout<<sumAtKthLevel(root);
	inorder(root);
	mirrorTraverse(root);
	cout<<endl;
	inorder(root);
	return 0;
}
//4251637
//7361524
