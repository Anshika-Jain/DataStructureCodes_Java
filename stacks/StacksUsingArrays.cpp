#include <iostream>

using namespace std;

#define n 100
class stack{
 
  int* arr;
  int top;
  public:
  stack(){
      arr = new int[n];
      top =-1;
  }
  void push(int x){
      if(top == n-1){
          cout<<"overflow";
          return;
      }
      top++;
      arr[top] = x;
  }
  void pop(){
      if(top == -1){
          cout<<"underflow";
          return;
      }
      top--;
  }
  int topelement(){
       if(top == -1){
          cout<<"underflow";
          return -1;
      }
      return arr[top];
  }
  bool empty(){
      if(top == -1){
          return true;
      }
      return false;
  }
};

int main() {
	// your code goes here

    stack st;
    cout<<st.empty()<<endl;
    st.push(2);
    cout<<st.topelement();
    st.push(3);
    cout<<st.topelement();
    st.push(4);
    cout<<st.topelement();
    st.pop();
    cout<<endl;
    cout<<st.topelement();
    cout<<endl;
    cout<<st.empty()<<endl;
    
	return 0;
}

//1
//234
//3
//0
