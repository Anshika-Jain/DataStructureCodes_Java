	int search(int arr[], int n, int k) {
	    for(int i = 1 ; i <= n ; i++){
	        if(arr[i-1] == k){
	            return i;
	        }
	    }
	    return -1;
	}

//indexing starts at 1 here
