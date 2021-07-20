Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.



bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        bool found =  false;
        sort(A,A+n);
        for(int i = 0 ; i < n - 2; i++){
            int lo = i+1; int hi = n-1;
            while(lo<hi){
                int sum = A[i]+A[lo]+A[hi];
                if(sum == X){
                     return true;
                }
                else if(sum > X){
                    hi--;
                }
                else{
                    lo++;
                }
            }
            
        }
           return found;
    }
