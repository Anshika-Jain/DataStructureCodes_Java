#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data = val;
        next = NULL;
    }
};

class LinkedList{
    public:
    node* head;
    node* tail;
    int size;
    
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    
    void InsertAtBeg(int val){
        node* temp = new node(val);
        temp->next = head;
        head = temp;
        if(size == 0){
            tail = temp;
        }
        size++;
        cout<<"New node inserted"<<endl;
    }
    
    void RemoveFirst(){
        if(size == 0){
            cout<<"List is Empty"<<endl;
        }
        else if(size == 1){
            head = tail = NULL;
            size = 0;
        }
        else{
            head = head->next;
            size--;  
        }
    }
    
    void sizeOfList(){
        cout<<size<<endl;
    }
    
    void display(){
        node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
    }
    cout<<endl;
    }
};

int main()
{
    LinkedList L;
    L.RemoveFirst();
    
    L.InsertAtBeg(2);
    L.display();
    L.sizeOfList();
    
    L.RemoveFirst();
    L.display();
    L.sizeOfList();
    
    L.InsertAtBeg(7);
    L.InsertAtBeg(3);
    L.InsertAtBeg(9);
    L.display();
    L.sizeOfList();
    
    L.RemoveFirst();
    L.display();
    L.sizeOfList();
   
   return 0;
}

//output
List is Empty
New node inserted
2 
1

0
New node inserted
New node inserted
New node inserted
9 3 7 
3
3 7 
2
