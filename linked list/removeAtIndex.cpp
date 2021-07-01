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

    void RemoveAtIndex(int k){
        if(size == 0){
            cout<<"List is empty!"<<endl;
        }else if( k < 0 || k >= size){
            cout<<"Invalid"<<endl;
        }else if(k == 0){
            if(size == 1){
                head = tail = NULL;
            }   
            else{
                head = head->next;
            }
            size--;
        }else if( k == size -1){
            if(size == 1){
                head = tail = NULL;
            }   
            else{
               node* temp = head;
               while(temp->next != tail){
                   temp = temp->next;
               }
               tail = temp;
               temp->next = NULL;
            }
            size--;
        }
        else{
            node* temp = head;
            for(int i = 0 ; i < k - 1 ; i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
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
    
    L.RemoveAtIndex(3);

    L.InsertAtEnd(2);
    L.InsertAtEnd(7);
    L.InsertAtEnd(3);
    L.InsertAtEnd(9);
   

    L.display();
    L.sizeOfList();

    L.RemoveAtIndex(8);

    L.RemoveAtIndex(2);

    L.display();
    L.sizeOfList();

    L.RemoveAtIndex(0);

    L.display();
    L.sizeOfList();

    L.RemoveAtIndex(L.size-1);

    L.display();
    L.sizeOfList();

    
   
   return 0;
}

//output
List is empty!   
New node inserted
New node inserted
New node inserted
New node inserted
2 7 3 9
4
Invalid
2 7 9
3
7 9
2
7
1
