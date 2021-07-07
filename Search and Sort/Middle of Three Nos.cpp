 int middle(int A, int B, int C){
        int x = max(A,max(B,C));
        int y = min(A,min(B,C));
        return x^y^A^B^C;
        
    }
