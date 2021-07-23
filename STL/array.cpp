#include<iostream>
#include<algorithm>
#include<array>
#include<vector>
using namespace std;

int main(){
    array<int,5> a;
    cout<<a.size();
    cout<<endl;

    cout<<a.empty();
    cout<<endl;
    
    for(auto it:a){
        cout<<it<<" ";
    }
    cout<<endl;

    for(int i = 0 ; i < a.size() ; i++){
        cin>>a[i];
    }
    cout<<endl;

    cout<<a.size();
    cout<<endl;

    cout<<a.at(2);
    cout<<endl;

    cout<<a.empty();
    cout<<endl;
    
    for(auto it:a){
        cout<<it<<" ";
    }
    cout<<endl;

    sort(a.begin() ,a.end());
    for(auto it:a){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<a.front();
    cout<<endl;
    cout<<a.back();
    cout<<endl;
    return 0;
}

//output
5
0
5125216 0 32 0 0 
2 5 3 1 8

5
3
0
2 5 3 1 8
1 2 3 5 8
1
8
