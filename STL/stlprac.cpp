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