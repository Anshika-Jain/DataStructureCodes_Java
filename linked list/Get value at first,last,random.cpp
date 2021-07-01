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

    int getFirst(){
        if(size == 0){
            return -1;
        }
        else{
            return head->data;
        }
    }
    
    int getLast(){
        if(size == 0){
            return -1;
        }else{
            return tail->data;
        }
    }

    int getValue(int k){
        if(size == 0){
            return -1;
        }else if( k < 0 || k >= size){
            return -1;
        }else{
            node* temp = head;
            for(int i = 0 ; i < k ; i++){
              temp = temp->next;  
            }
            return temp->data;
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
    L.display();
    L.sizeOfList();
   
    L.InsertAtEnd(2);
    L.InsertAtEnd(7);
    L.InsertAtEnd(3);
    L.InsertAtEnd(9);

    cout<<"\n"<<L.getFirst();
    
    cout<<"\n"<<L.getLast();
    L.RemoveAtEnd();
    cout<<"\n"<<L.getLast();
    cout<<"\n"<<L.getValue(1);
   
   return 0;
}

//output
0
New node inserted
New node inserted
New node inserted
New node inserted

2
9
3
7
