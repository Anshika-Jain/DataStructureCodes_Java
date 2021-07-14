int binary_to_decimal(string str)
		{
		    int n = 0;
		    int base = 1;
		    for(int i = str.length()-1 ; i >= 0 ; i--){
		        if(str[i] == '1'){
		            n =  n + base;
		        }
		        base = base*2;
		    }
		    return n;
		}
