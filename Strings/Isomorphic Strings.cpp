#include <bits/stdc++.h>
using namespace std;

//using maps
#define MAX_CHARS 256
bool areIsomorphic(string str1, string str2)
{
        
     int l1 = str1.length();
     int l2 = str2.length();
     if(l1 != l2){
         return false;
     }
     map<char,char> m1;
     map<char,char> m2;
     //char m1[MAX_CHARS] = {0};
     //char m2[MAX_CHARS] = {0};
     for(int i = 0 ; i < l1 ; i++){
        if(!m1[str1[i]] && !m2[str2[i]]){
            m1[str1[i]] = str2[i];
            m2[str2[i]] = str1[i];
        }else if(m1[str1[i]] != str2[i] || m2[str2[i]] != str1[i]){
         return false;
     }
    }
     return true;
}

int main() {
    string s1, s2;
    cin>>s1>>s2;
    bool ans = areIsomorphic(s1,s2);
    cout<<ans;
	return 0;
}
//MAX_CHARS = 256 (total characters)
