#include<bits/stdc++.h>
using namespace std;

int main() {
	string s1;
	cin>>s1;
	string s2;
	cin>>s2;
	if(s1.length() != s2.length()){
	    cout<<"No";
	}else{
	    string s = s1 +s1;
	    if(s.find(s2) != string::npos){
	        cout<<"yes";
	    }else{
	        cout<<"No";
	    }
	}
	
	return 0;
}
