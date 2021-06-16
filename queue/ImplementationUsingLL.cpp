

#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    public:
    node(int val){
        data = val;
        next = NULL;
    }
};

class queue{
    node* front;
    node* back;
    
    public:
    queue(){
        front = NULL;
        back = NULL;
    }
    
    void push(int x){
        node* n = new node(x);
        if(front == NULL){
            front = n; 
            back = n;
        }
        
        back->next = n;
        back = n;
    }
    void pop(){
        if(front == NULL){
           cout<<"uderflow";
           return;
       }
       
       front = front->next;
    }
    int peek(){
       if(front == NULL){
           cout<<"uderflow";
           return -1;
       }
       
       return front->data;
       
    }
    
   
    bool isEmpty(){
        if(front ==NULL){
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    
    q.push(2);
    q.push(4);
    q.push(8);
    
    cout<<q.isEmpty()<<endl;
     
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    
    cout<<q.isEmpty();

    return 0;
}
