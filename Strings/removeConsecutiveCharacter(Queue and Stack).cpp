#include <bits/stdc++.h>
using namespace std;


string removeConsecutiveCharacterQueue(string s)
{
       queue<char> st;
       st.push(s[0]);
       int i;
       for(i = 1 ; i < s.length() ; i++){
           if(s[i] != st.back()){
                st.push(s[i]);
           }
          
       }
        string ans;
        
        while (!st.empty())
        {
            ans.push_back(st.front());
            st.pop();
        }
        
       return ans;
}

string removeConsecutiveCharacterStack(string s)
    {
       stack<char> st;
       st.push(s[0]);
       int i;
       for(i = 1 ; i < s.length() ; i++){
           if(s[i] != st.top() && st.size() !=0 || st.empty() == 1){
                st.push(s[i]);
           }
          
       }
        string ans;
        
        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin() , ans.end());
       return ans;
    }
int main() {
    string s1;
    cin>>s1;
    cout<<removeConsecutiveCharacterQueue(s1);
    cout<<endl;
    cout<<removeConsecutiveCharacterStack(s1);
	return 0;
}
