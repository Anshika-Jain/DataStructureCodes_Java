//Linked List Implementation without defining a class
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
        
    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtEnd(Node* &head, int  val){
    Node* n = new Node(val);
    if(head == NULL){
        head = n;
        return;
    }
    
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


    

int main(){
    
    Node* head = NULL;
    insertAtEnd(head,2);
    insertAtEnd(head,4);
    insertAtEnd(head,7);
    display(head); // 2 4 7
    
    return 0;
}
