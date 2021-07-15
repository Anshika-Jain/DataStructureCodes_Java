 unsigned int getFirstSetBit(int n)
    {
        if(n == 0){
            return 0;
        }
        n = log2(n & (-n))+1;
        return n;
    }
