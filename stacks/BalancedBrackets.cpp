

#include <iostream>
#include <stack>

using namespace std;
int BalancedBrackets(string s){
    stack<int> st;
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == '{' || s[i] == '[' || s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == '}'){
            if(st.size() == 0){
                return 0;
            }
            else if(st.top() != '{'){
                return 0;
            }
            else{
                st.pop();
            }
            
        }
        else if(s[i] == ']'){
            if(st.size() == 0){
                return 0;
            }
            else if(st.top() != '['){
                return 0;
            }
            else{
                st.pop();
            }
            
        }
        else if(s[i] == ')'){
            if(st.size() == 0){
                return 0;
            }
            else if(st.top() != '('){
                return 0;
            }
            else{
                st.pop();
            }
            
        }
    }
    
    if(st.size() == 0){
        return 1;
    }
    else{
        return 0;
    }

}
int main()
{
    cout<<BalancedBrackets("({c+d}])"); //0
    cout<<BalancedBrackets("([{c+d}])"); //1
    cout<<BalancedBrackets("[{c+d}])"); //0
    cout<<BalancedBrackets("({[c+d}])"); //0

    return 0;
}
