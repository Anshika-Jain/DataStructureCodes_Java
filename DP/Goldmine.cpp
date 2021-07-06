int maxGold(int n, int m, vector<vector<int>> M)
    {
        //n = rows;
        //m = cols;
        int dp[n][m];
        memset(dp,0,sizeof(dp));
       
        
        
        for(int j = m-1 ; j >= 0 ; j--){
            for(int i = 0 ; i < n ; i++){
              
                if( j == m-1 ){
                    dp[i][j] = M[i][j];
                }else if( i == 0 ){
                    if(n > 1){
                        dp[i][j] = M[i][j] + max(dp[i][j+1],dp[i+1][j+1]);
                    }else if(n == 1){
                        dp[i][j] =M[i][j] + dp[i][j+1];
                    }
                    
                }else if( i == n - 1 ){
                    dp[i][j] = M[i][j] + max(dp[i][j+1],dp[i-1][j+1]);
                }else{
                    int temp = max(dp[i-1][j+1],dp[i][j+1]);
                    dp[i][j] = M[i][j] + max(dp[i+1][j+1],temp);
                }
            }
        }
        
        int maxval = dp[0][0];
        for(int i = 0 ; i < n ; i++){
            maxval = max(maxval, dp[i][0]);
        }
        
        return maxval;
    }
