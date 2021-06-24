

#include <iostream>

using namespace std;
#define n 20
class queue{
    int* arr;
    int front;
    int back;
    
    public:
    queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }
    
    void push(int x){
        if(back == n-1){
            cout<<"overflow";
            return;
        }
        
        back++;
        arr[back] = x;
        
        if(front == -1){
            front++;
        }
    }
    
    void pop(){
        if(front> back || front == -1){
            cout<<"underflow";
            return;
        }
        
        front++;
    }
    
    int peek(){
        if(front > back || front == -1){
            return -1;
        }
        
        return arr[front];
        
    }
    
    bool isEmpty(){
        if(front > back || front == -1){
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
    q.push(6);
    
    q.isEmpty();
     
    q.peek();
    q.pop();
    q.peek();
    q.pop();
    q.peek();
    q.pop();
    
    q.isEmpty();

    return 0;
}
