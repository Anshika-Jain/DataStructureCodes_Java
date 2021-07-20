 bool subArrayExists(int arr[], int n)
    {
        int prefix[n];
        prefix[0] = arr[0];
        for(int i = 1 ; i < n ; i++){
            prefix[i] = prefix[i-1]+arr[i];
        }
    
       map<int,int> m;
       for(int i = 0 ; i < n ; i++){
           m[prefix[i]]++;
       }
       
       for(auto it:m){
           if(it.second >= 2 || it.first == 0){
               return true;
           }
       }
        return false;
    }
