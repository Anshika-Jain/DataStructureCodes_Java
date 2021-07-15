//my solution 
int findPosition(int N) {
        if( N == 0){
            return -1; 
        }
        if( N == 1){
            return 1; 
        }
        if( N%2 != 0){
            return -1;
        }else if((N & (N-1)) == 0){
            return log2(N & (-N))+1;
        }else{
            return -1;
        }
    }
