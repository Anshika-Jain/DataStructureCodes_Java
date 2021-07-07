//Given an array A of N elements. Find the majority element in the array. 
//A majority element in an array A of size N is an element that appears more than N/2 times in the array.

 int majorityElement(int a[], int size)
    {
       map<int,int> m;
       for(int i = 0 ; i < size ; i++){
           m[a[i]]++;
       }
       
        for(auto i:m){
            if(i.second > size/2){
                return i.first;
            }
        }
        return -1;
    }
