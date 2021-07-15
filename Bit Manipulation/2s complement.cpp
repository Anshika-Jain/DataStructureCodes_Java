 string complement(string bi){
        string ans;
        int c = 1;
        for(int j = 0 ; j < bi.length() ; j++){
            if(bi[j] == '0'){
                ans+= '1';
            }else{
                ans+= '0';
            }
        }
        
        for(int i = bi.length()-1 ; i >= 0 ; i--){
            if(c == 1 && ans[i] == '1'){
                ans[i] = '0';
            }else if(c == 1 && ans[i] == '0'){
                ans[i] = '1';
                c = 0;
            }
        }
        
        return ans;
    }
