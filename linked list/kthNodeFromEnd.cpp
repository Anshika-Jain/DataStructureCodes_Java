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
    
   int kthfromEnd( int n)
{
    node* slow = head;
    node* fast = head;

    for(int i = 0 ; i < n-1 ; i++){
            fast = fast->next;
             if(fast == NULL){
                 return -1;
            }
    }
   

    while(fast->next != NULL){
        slow = slow->next;
        fast = fast->next;
    }
    
    return slow->data;
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
    
  
    L.InsertAtEnd(2);
    L.InsertAtEnd(7);
    L.InsertAtEnd(3);
    L.InsertAtEnd(9);
    L.InsertAtEnd(8);
    L.display();
   
   
    cout<<L.kthfromEnd(2)<<endl;
     cout<<L.kthfromEnd(1)<<endl;
      cout<<L.kthfromEnd(5)<<endl;
      cout<<L.kthfromEnd(7)<<endl;

   

    
   
   return 0;
}

//output
New node inserted
New node inserted
New node inserted
New node inserted
New node inserted
2 7 3 9 8
9
8
2
-1
