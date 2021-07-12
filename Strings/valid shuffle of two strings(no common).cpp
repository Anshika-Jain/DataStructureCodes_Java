//Interleaving of two given strings with no common characters

#include<bits/stdc++.h>
using namespace std;

int main() {
	string s1,s2;
	cin>>s1>>s2;
	string temp;
	cin>>temp;
	int l1 = s1.length();
	int l2 = s2.length();
	int tl = temp.length();
	if(tl != l1+l2){
	    cout<<"No";
	    
	}else{
	    int i = 0 , j = 0 , k = 0;
	    while(k<tl){
	        if(i<l1 && s1[i] == temp[k]){
	            i++;
	        }else if(j<l2 && s2[j] == temp[k]){
	            j++;
	        }else{
	            
	            break;
	        }
	        k++;
	    }
	   if(i<l1 || j<l2){
	       cout<<"No";
	   }else{
	       cout<<"yes";
	   }
	   return 0;
	}
	
}


//xy
//12
//xy12, x1y2, 12xy, 1xy2, x12y = correct
//yx12, y12x, 2x1y etc = incorrect
