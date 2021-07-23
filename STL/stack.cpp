#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int main(){
   stack<char> s;
   cout<<s.empty()<<endl;
   cout<<s.size()<<endl;

   s.push('a');
   s.push('b');
   s.push('c');
   s.push('d');
   cout<<s.empty()<<endl;
   cout<<s.size()<<endl;
   cout<<s.top()<<endl; 

   s.pop();
   cout<<s.top()<<endl; 

   while(s.empty()!= true){
       cout<<s.top()<<" ";
       s.pop(); 
   } 
   
   

    return 0;
}
//output
1
0
0
4
d
c
c b a
