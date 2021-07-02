#include <iostream>
#include <map>

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

    void removeDuplicatesUnLL(){
        map<int,int> m;
        node* cur = head;
        node* prev = NULL;

        m[cur->data] = 1;

        prev = cur;
        cur = cur->next;

        while(cur != NULL){
            if(m[cur->data] != 0){
                prev->next = cur->next;
                free(cur);
            }else{
                m[cur->data] = 1;
                prev = cur;
            }
            cur = prev->next;
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
    
    L.InsertAtEnd(3);
    L.InsertAtEnd(2);
    L.InsertAtEnd(2);
    L.InsertAtEnd(2);
    L.InsertAtEnd(3);
    L.InsertAtEnd(9);
    L.InsertAtEnd(6);
    L.InsertAtEnd(9);
    L.InsertAtEnd(2);
   
    L.display();

    L.removeDuplicatesUnLL();

    L.display();
   
   
   

    
   
   return 0;
}

//output
New node inserted
New node inserted
New node inserted
New node inserted
New node inserted
New node inserted
New node inserted
New node inserted
3 2 2 2 3 9 6 9 2
3 2 9 6
