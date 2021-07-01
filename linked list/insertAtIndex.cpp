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

    void insertAtIndex(int k, int val){
        if(k < 0 || k > size){
            cout<<"Inavlid"<<endl;
        }else if( k == 0){
            InsertAtBeg(val);
        }else if( k == size){
            InsertAtEnd(val);
        }else{
            node* n = new node(val);
            node* temp = head;
            for(int i = 0 ; i < k-1 ; i++){
                temp = temp->next;
            }
            n->next = temp->next;
            temp->next = n;
             size++;
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
    L.InsertAtBeg(5);

    L.display();
    L.sizeOfList();

    L.insertAtIndex(0,4);
    L.display();
    L.sizeOfList();

    L.insertAtIndex(L.size,8);
    L.display();
    L.sizeOfList();

    L.insertAtIndex(2,6);
    L.display();
    L.sizeOfList();
    
   
   return 0;
}

//output

0
New node inserted
New node inserted
New node inserted
New node inserted
New node inserted
5 2 7 3 9        
5
New node inserted
4 5 2 7 3 9
6
New node inserted
4 5 2 7 3 9 8
7
4 5 6 2 7 3 9 8
8
