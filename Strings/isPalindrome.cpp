
#include<bits/stdc++.h>
using namespace std;

int isPlaindrome(string S)
	{
	     for(int i = 0 ; i < S.length()/2 ; i++){
	        if(S[i] != S[S.length()-1-i]){
	            return 0;
	        }
	    }
	    return 1;
	}



int main(){
    string s = "Anshika";
    string a = "greerg";
    string b = "greberg";
    cout<<isPlaindrome(s)<<endl;
    cout<<isPlaindrome(a)<<endl;
    cout<<isPlaindrome(b)<<endl;
    

    return 0;
}
//output
0
1
1
