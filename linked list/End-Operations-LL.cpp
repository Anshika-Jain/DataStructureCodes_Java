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
    
    void InsertAtEnd(int val){
        node* temp = new node(val);
        if(size == 0){
            head = tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
        cout<<"New node inserted"<<endl;
    }
    
    void RemoveAtEnd(){
        if(size == 0){
            cout<<"List is Empty"<<endl;
        }
        else if(size == 1){
            head = tail = NULL;
            size = 0;
        }
        else{
            node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            tail=temp;
            temp->next = NULL;
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
    L.RemoveAtEnd();
    
    L.InsertAtEnd(2);
    L.display();
    L.sizeOfList();
    
     L.RemoveAtEnd();
    L.display();
    L.sizeOfList();
    
    L.InsertAtEnd(7);
    L.InsertAtEnd(3);
    L.InsertAtEnd(9);
    L.display();
    L.sizeOfList();
    
    L.RemoveAtEnd();
    L.display();
    L.sizeOfList();
    
    L.RemoveAtEnd();
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
7 3 9 
3
7 3 
2
7 
1
