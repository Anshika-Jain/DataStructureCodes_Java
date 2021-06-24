#include <iostream>
#include <queue>
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
int sumAtKthLevel(node* root){
    if(root == NULL){
        return -1;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int k = 0;
    int sum = 0;
    while(!q.empty()){
        node* curr = q.front();
        q.pop();
        if(curr != NULL){
            if( k == 1){
                sum = sum + curr->data; 
            }
            if(curr->left != NULL){
            q.push(curr->left);
            }
            if(curr->right != NULL){
            q.push(curr->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            k++;
        }
    }
    return sum;
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
	cout<<sumAtKthLevel(root);
	return 0;
}
//5
