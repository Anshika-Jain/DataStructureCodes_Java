	vector<int> valueEqualToIndex(int arr[], int n) {
	    vector<int> v;
	    for(int i = 1 ; i <= n ; i++){
	        if(arr[i-1] == i){
	            v.push_back(i);
	        }
	    }
	  return v;  
	}

//For Input:
5
15 2 45 12 7
//your output is: 
2
  
//For Input:
5
15 21 45 12 7
//your output is: 
Not Found
