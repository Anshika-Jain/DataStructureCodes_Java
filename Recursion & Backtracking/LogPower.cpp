#include<iostream>
using namespace std;

int LogPower(int x, int n){
    if(n==0){
        return 1;
    }
    int ans = LogPower(x,n/2)*LogPower(x,n/2);
    if(n%2 == 1){
        ans = ans * x;
    }
    return ans;
}

int main(){
    int n;
    int x;
    cin>>x;
    cin>>n;
    cout<<LogPower(x,n);
    return 0;
}
