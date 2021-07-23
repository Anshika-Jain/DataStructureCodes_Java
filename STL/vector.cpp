#include<iostream>
#include<algorithm>
#include<vector>
#include<array>

using namespace std;

int main(){
    vector<int> v;
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    cout<<v.empty()<<endl;

    v.push_back(2);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(3);
    v.push_back(4);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    for(auto  it:v ){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<v.at(1)<<endl;

    reverse(v.begin() , v.end());
     for(auto  it:v ){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<v.empty()<<endl;

    sort(v.begin() , v.end());
     for(auto  it:v ){
        cout<<it<<" ";
    }
    cout<<endl;

    vector<int> a(5,2);
       for(auto  it:a ){
        cout<<it<<" ";
    }
    cout<<endl;

     vector<int> b(5);
       for(auto  it:b ){
        cout<<it<<" ";
    }
    cout<<endl;
    array<int,5> b2;
       for(auto  it:b2 ){
        cout<<it<<" ";
    }
      cout<<endl;

    vector<int> c(v);
    c.push_back(5);
    c.push_back(6);
       for(auto  it:c ){
        cout<<it<<" ";
    }
    cout<<endl;

    v.clear();
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    return 0;
}
//output
0
0
1
1
1
4
3
2 3 4
3
4 3 2
0
2 3 4
2 2 2 2 2
0 0 0 0 0
2033528 0 -2044417402 32762 5137512
2 3 4 5 6
4
0
