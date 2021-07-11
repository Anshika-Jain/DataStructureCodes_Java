bool findPair(int arr[], int size, int n){
    
    sort(arr,arr+size);
    
    for(int i = 0 ; i < size ; i++){
        int ind = upper_bound(arr+i+1 , arr+size , arr[i]+n) - arr-1;
        //  int ind = lower_bound(arr+i+1 , arr+size , arr[i]+n) - arr;
        if(arr[ind] - arr[i] == n){
            return true;
        }
    }
    return false;
}
