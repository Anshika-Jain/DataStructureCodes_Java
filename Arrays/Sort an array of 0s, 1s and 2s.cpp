void sort012(int a[], int n)
    {
        
        //sort(a, a + n);
        int  c = 0, d = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(a[i] == 0)
                c++;
            else if(a[i] == 1)
                d++;
        }
        
        for(int i = 0 ; i < c ; i++){
            a[i] = 0;
        }
        
         for(int i = c ; i < c+d ; i++){
            a[i] = 1;
        }
        for(int i = d+c ; i < n ; i++){
            a[i] = 2;
        }
        
    }
