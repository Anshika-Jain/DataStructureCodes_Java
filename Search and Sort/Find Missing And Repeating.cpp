int *findTwoElement(int *arr, int n) {
        int *a = new int[2];
        
        int x,y;
        for(int i = 0 ; i < n ; i++){
            if(arr[abs(arr[i])-1] < 0){
                x = abs(arr[i]);
            }else{
                arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
            }
        }
        
        for(int i = 0 ; i < n ; i++){
            if(arr[i] > 0){
                y = i+1;
            }
        }
        a[0] = x;
        a[1] = y;
      return a;  
    }
