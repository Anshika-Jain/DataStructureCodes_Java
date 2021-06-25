#include <iostream>
#include <stack>
using namespace std;
void reverseString(string s){
    stack<char> st;
    int len = s.length();
    char c;
    int i = 0;
        while(s[i]!= '\0' && i<s.length()){
             c = s[i];
             st.push(c);
             i++;
        }
    
  
    char word[len];
    for(int j = 0 ; j < len ; j++){
        word[j] = st.top();
        st.pop();
    }
    
    cout<<word;
}
int main() {
	// your code goes here
	string s = "ZTdbgGwptH";
	 reverseString(s);

	return 0;
}

//HtpwGgbdTZ 
