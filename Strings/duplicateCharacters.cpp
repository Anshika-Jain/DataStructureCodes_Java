#include <bits/stdc++.h>
using namespace std;

//using maps
int main() {
	string s;
	cin>>s;
	map<char,int> m;
	for(int i = 0 ; i < s.length() ; i++){
	    m[s[i]]++;
	}

	for(auto i:m){
	    if(i.second > 1){
	        cout<<i.first<<endl;
	    }
	}
	return 0;
}
