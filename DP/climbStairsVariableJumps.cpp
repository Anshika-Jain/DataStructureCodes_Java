#include<bits/stdc++.h>
using namespace std;
 
 int climbStairsVariableJumps(int arr[] , int n)
    {
      int dp[n+1];
      memset(dp,0,sizeof(dp));
      dp[n] = 1;
      for(int i = n-1 ; i >= 0 ; i--){
        for(int j = 1 ; j <= arr[i] && i+j < n+1 ; j++){
          dp[i] += dp[i+j];
        }
      }
        for(int  i = 0 ; i < n+1 ; i++){
      cout<<dp[i]<<" ";
    }
    cout<<endl;
      return dp[0];
    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int  i = 0 ; i < n ; i++){
      cin>>arr[i];
    }
    cout<<climbStairsVariableJumps(arr,n);
    return 0;
}

//output
6
3 3 0 2 2 3
8 5 0 3 2 1 1
8
