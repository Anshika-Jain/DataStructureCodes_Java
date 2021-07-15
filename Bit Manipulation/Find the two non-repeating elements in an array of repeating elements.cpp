vector<int> singleNumber(vector<int> nums) 
    {   
        vector<int> v;
        int xxory = 0;
        for(auto i:nums){
            xxory = (xxory^i);
        }
        
        int rmsb = xxory & -xxory;
        int x = 0;
        int y = 0;
        for(auto i:nums){
            if((i&rmsb) == 0){
                x = x^i;
            }else{
                y = y^i;
            }
        }
        
        v.push_back(x);
        v.push_back(y);
        sort(v.begin() , v.end());
        return v;
    }
