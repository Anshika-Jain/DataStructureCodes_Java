 int setSetBit(int x, int y, int l, int r){
        // code here
        
         for (int i=l; i<=r; i++)
        {
        int  mask = 1 << (i-1);
        
        int res = y & mask;
       
        x = (x|res);
        }
        return x;
    }
