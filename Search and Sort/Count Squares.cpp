//Consider a sample space S consisting of all perfect squares starting from 1, 4, 9 and so on. 
//You are given a number N, you have to output the number of integers less than N in the sample space S.

 int countSquares(int N) {
       
        int i = 1;
        while(i < sqrt(N)){
            ++i;
        }
      
        return i-1;
    }
