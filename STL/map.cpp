#include<iostream>
#include<algorithm>
#include<map>

using namespace std;

int main(){
    
    map<int,int> m;
    cout<<m.size()<<" "<<m.empty()<<endl;
        
    m[3] = 4;
    m[6] = 7;
    m.insert({5,8});
    m.insert({1,2});
    m.insert({4,6});

    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<m.size()<<" "<<m.empty()<<endl;

    cout<<m.count(4)<<" "<<m.count(-9)<<endl;

    m.erase(3);
    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<m.size()<<" "<<m.empty()<<endl;

    auto itr = m.find(5);
    for(auto it = itr ; it != m.end(); it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    



    return 0;
}

//output
0 1
1 2
3 4
4 6
5 8
6 7
5 0
1 0
1 2
4 6
5 8
6 7
4 0
5 8
6 7
