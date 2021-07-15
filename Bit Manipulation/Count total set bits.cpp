 int helper(int n){
        int x = 0;
        while((1<<x) <= n){
            x++;
        }
        return x-1;
    }
    int countSetBits(int n)
    {   
        if(n == 0){
            return 0;
        }
        
        int x = helper(n);
        int a = x*(1<<(x-1));
        int b = n-(1<<x)+1;
        n = n-(1<<x);
        return a+b+countSetBits(n);
    }
