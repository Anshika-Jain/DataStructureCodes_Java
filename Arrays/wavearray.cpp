#include<iostream> 
#include<algorithm> 
using namespace std; 

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void convertToWave(int *arr, int n){
    
    // Your code here
    int i;
    for(i = 0; i< n-1; i= i+2 )
    {
        swap(&arr[i],&arr[i+1]);
    }
    
}

int main() 
{ 
    int t, n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) 
       cin >> arr[i] ; 
    convertToWave(arr, n); 
    for (int i=0; i<n; i++) 
       cout << arr[i] << " "; 
    return 0; 
} 