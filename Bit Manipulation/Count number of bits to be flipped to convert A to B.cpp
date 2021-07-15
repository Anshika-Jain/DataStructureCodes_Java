  int countBitsFlip(int a, int b){
        a =  (a^b);
        int c = 0 ;
        while(a != 0){
            a = a&(a-1);
            c++;
        }
        return c;
        
    }
