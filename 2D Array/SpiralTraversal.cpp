  vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> v;
        int minr = 0;
        int minc = 0;
        int maxc = c-1;
        int maxr = r-1;
        
        int total = r*c;
        int n = 0;
        //top wall
        while(n < total){
            for(int i = minr,  j = minc ; j <= maxc && n < total ; j++){
                v.push_back(matrix[i][j]);
                n++;
            }
            minr++;
        //right wall
        for(int i = minr , j = maxc ; i <= maxr && n < total ; i++){
                v.push_back(matrix[i][j]);
                n++;
            }
            maxc--;

        //bottom wall
        for(int i = maxr,  j = maxc ; j >= minc && n < total ; j--){
                v.push_back(matrix[i][j]);
                n++;
            }
            maxr--;

        //left wall
        for(int i = maxr,  j = minc ; i >= minr && n < total ; i--){
                v.push_back(matrix[i][j]);
                n++;
            }
            minc++;


        }
        return v;
    }
