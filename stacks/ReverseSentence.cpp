#include <iostream>
#include <stack>
using namespace std;
void reverseSentence(string s){
    stack<string> st;
    for(int i = 0 ; i < s.length() ; i++){
        string word = "";
        while(s[i]!= ' ' && i<s.length()){
            word += s[i];
            i++;
        }
        st.push(word);
    }
    
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main() {
	// your code goes here
	string s = "Hello! I am Anshika Jain.";
	reverseSentence(s);
	return 0;
}

//Jain. Anshika am I Hello! 
