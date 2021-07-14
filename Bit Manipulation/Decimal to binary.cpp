void toBinary(int N)
{
    int arr[32] = {0} ;
    int i = 0;
    while(N != 0){
        arr[i] = N%2;
        N = N/2;
        i++;
    }
    for(int j = i-1 ; j >= 0 ; j--){
    printf("%d",arr[j]);
    }    
}
