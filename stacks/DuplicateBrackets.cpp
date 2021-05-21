

#include <iostream>
#include <stack>
#include <math.h>

using namespace std;
int DuplicateBrackets(string s){
    stack<int> st;
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == ')'){
            if(st.top() == '('){
                return 1;
            }
            else{
                while(st.top()  != '('){
                    st.pop();
                    
                }
                st.pop();
            }
        }
        else{
             st.push(s[i]);
        }
      
    }
   return 0;  

}
int main()
{
    cout<<DuplicateBrackets("((c+d) - (a+b))"); // 0 - false
    cout<<DuplicateBrackets("((c+d) - ((a+b)))"); // 1 - true

    return 0;
}
