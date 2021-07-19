#include<bits/stdc++.h>
using namespace std;


int minJumps(int arr[], int n){
        if(n <= 1){
            return 0;
        }
        
        if(arr[0] == 0){
            return -1;
        }
        int dp[n];
        memset(dp,-1,sizeof(dp));
        
      
        dp[n-1] = 0;
        for(int i = n-2 ; i >=0 ; i--){
            int steps = arr[i];
            int min = INT_MAX;
            
            for(int j = 1 ; j <= steps && i+j < n ; j++){
                if(dp[i+j] != -1 && dp[i+j] < min){
                    min = dp[i+j];
                   
                }
            }
            
            if(min != INT_MAX ){
                dp[i] = min+1;
            }
        }
        
        return dp[0];
    }

    int main(){
        int arr[] =  {1, 4, 3, 2, 6, 7};
        int n = 6 ;
        cout<<minJumps(arr,n);
        return 0;
    }
