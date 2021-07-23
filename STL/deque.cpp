#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    cout<<d.size()<<endl;
    cout<<d.max_size()<<endl;

    d.push_back(2);
    d.push_front(5);

    cout<<d.at(1)<<endl;

    for(auto it: d){
        cout<<it<<" ";
    }
    cout<<endl;

    d.push_front(4); //4 5 2

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    cout<<d.size()<<endl;
    cout<<d.max_size()<<endl;

    d.erase(d.begin() , d.begin()+1);
     for(auto it: d){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<d.size()<<endl;
    cout<<d.max_size()<<endl;
    
    d.push_front(6);
    d.push_front(8);
    d.push_front(9);
    
    for(auto it: d){
        cout<<it<<" ";
    }
    cout<<endl;
    deque<int>::iterator it1, it2;
    it1 = d.begin();
    
    d.erase(it1 + 2 , it1+4);
    for(auto it: d){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<d.size()<<endl;
    cout<<d.max_size()<<endl;
    
   
   

    return 0;
}
//output
0
2305843009213693951
2
5 2
4
2
3
2305843009213693951
5 2
2
2305843009213693951
9 8 6 5 2
9 8 2
3
2305843009213693951
