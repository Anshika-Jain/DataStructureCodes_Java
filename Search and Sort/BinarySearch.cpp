 int BinarySearch(int arr[], int N, int K) 
    { 
       //arr
      // N = size
      //K = element
      int h = N-1;
      int l = 0;
      while(l <= h){
          int mid = (h+l)/2;
          if(arr[mid] > K){
              h = mid -1;
          }else if(arr[mid] < K){
              l = mid + 1;
          }else{
              return mid;
          }
      }
      return -1;
    }
