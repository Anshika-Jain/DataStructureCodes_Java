
#include<bits/stdc++.h>
using namespace std;
string reverseFunc(string s){
    reverse(s.begin(),s.end());
    return s;
}

string reverseSwap(string s){
    int n = s.size();
    for(int i = 0 ; i < n/2 ; i++){
        swap(s[i], s[n-i-1]);
    }
    return s;
}


string reverseStack(string s){
    stack<char> st;
    for(int i = 0 ; i < s.size() ; i++){
        st.push(s[i]);
    }
    for(int i = 0 ; i < s.size() ; i++){
        s[i] = st.top();
        st.pop();
    }
    
    return s;
}

string reverseTemp(string s){
    string v;
    for(int i = s.size()-1 ; i >= 0  ; i--){
        v.push_back(s[i]);
    }
  
    return v;
}


void reverseRecursion(string str){
     if(str.size() == 0)
    {
        return;
    }
    reverseRecursion(str.substr(1));
    cout << str[0];
    
}

int main(){
    string s = "Anshika";
    cout<<s.substr(1)<<endl;
    string a = "greedy";
    cout<<reverseFunc(s)<<endl;
    cout<<reverseSwap(s)<<endl;
    cout<<reverseStack(s)<<endl;
    cout<<reverseTemp(s)<<endl;
    reverseRecursion(s);
    cout<<endl;
    cout<<reverseFunc(a)<<endl;
    cout<<reverseSwap(a)<<endl;
    cout<<reverseStack(a)<<endl;
    cout<<reverseTemp(a)<<endl;
    reverseRecursion(a);
     cout<<endl;
    

    return 0;
}
