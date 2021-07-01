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
    //first element in even
    int middleEle(){
        
        node* slow = head;
        node* fast = head;

        while(fast-> next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow->data;
    }
    //second element in even
    int middleElem(){
        
        node* slow = head;
        node* fast = head;

         while (fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
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

    L.display();
   
    cout<<"First element in even:"<<L.middleEle()<<endl;
    cout<<"Second element in even:"<<L.middleElem()<<endl;

    L.InsertAtEnd(3);

      L.display();
   
    cout<<"First element in even:"<<L.middleEle()<<endl;
    cout<<"Second element in even:"<<L.middleElem()<<endl;

    L.InsertAtEnd(9);
   

    L.display();
   
    cout<<"First element in even:"<<L.middleEle()<<endl;
    cout<<"Second element in even:"<<L.middleElem()<<endl;

    L.InsertAtEnd(8);

     L.display();
   
    cout<<"First element in even:"<<L.middleEle()<<endl;
    cout<<"Second element in even:"<<L.middleElem()<<endl;

   

    
   
   return 0;
}

//output
New node inserted
New node inserted
2 7
First element in even:2
Second element in even:7
New node inserted
2 7 3
First element in even:7
Second element in even:7
New node inserted
2 7 3 9
First element in even:7
Second element in even:3
New node inserted
2 7 3 9 8
First element in even:3
Second element in even:3
