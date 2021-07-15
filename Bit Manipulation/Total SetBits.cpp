//count no of 1s in the binary no
int setBits(int N) {
        int count = 0;
        while(N != 0){
            count = count + (N&1);
            N = (N>>1);
        }
        return count;
    }
