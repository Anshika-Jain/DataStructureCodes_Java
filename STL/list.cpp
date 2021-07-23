#include<iostream>
#include<algorithm>
#include<list>

using namespace std;

int main(){
    //list = doubly linked list
    list<int> l;
    cout<<l.size()<<endl;
    cout<<l.max_size()<<endl;
    cout<<l.empty()<<endl;
    
    l.push_back(3);//3 
    l.push_back(5);// 3 5
    l.push_front(2);// 2 3 5
    l.push_front(8);//8 2 3 5
    for(auto it:l){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<l.size()<<endl;

    l.pop_back();
    l.pop_front();
    for(auto it:l){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<l.size()<<endl;

    cout<<l.front()<<endl;
    cout<<l.back()<<endl;

    l.push_back(4);
    l.push_back(5);// 2 3 4 5

    list<int>::iterator it1;
    it1 = l.begin();
    l.erase(it1);
    //l.erase(it1 +2 , it1 +4) ; doesnt work

    cout<<l.size()<<endl;
    cout<<l.empty()<<endl;
      for(auto it:l){
        cout<<it<<" ";
    }
    cout<<endl;

    list<int> l2(5);
     for(auto it:l2){
        cout<<it<<" ";
    }
    cout<<endl;

    list<int> l4(5,9);
     for(auto it:l4){
        cout<<it<<" ";
    }
    cout<<endl;

    list<int> l3(l);
    l3.push_front(9);
    l3.push_back(6);
     for(auto it:l3){
        cout<<it<<" ";
    }
    cout<<endl;

    l.clear();
    cout<<l.size()<<endl;
     cout<<l.empty()<<endl;
    
    return 0;
}

//output
0
384307168202282325
1
8 2 3 5
4
2 3
2
2
3
3
0
3 4 5
0 0 0 0 0
9 9 9 9 9
9 3 4 5 6
0
1
