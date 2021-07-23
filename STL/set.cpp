#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

int main(){
   
    set<int> s;
    cout<<s.max_size()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;

    s.insert(3);
    s.insert(4);
    s.insert(8);
    s.insert(5);
    s.insert(2);
    s.insert(3);
    s.insert(8);
    s.insert(5);

    for(auto it:s){
        cout<<it<<" "; 
    }cout<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;

    cout<<s.count(4)<<endl;

    set<int,greater<int>> s2(s.begin() , s.end());
    for(auto it:s2){
        cout<<it<<" "; 
    }cout<<endl;
    cout<<s2.size()<<endl;

    //deleting elements less than 5
    s.erase(s.begin() , s.find(5));
    for(auto it:s){
        cout<<it<<" "; 
    }cout<<endl;
    cout<<s.size()<<endl;



    return 0;
}
//output
0
1
2 3 4 5 8
5
0
1
8 5 4 3 2
5
5 8
2
