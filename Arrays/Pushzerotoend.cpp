#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
   system("CLS");
   int i=0,n = 0;
   int arr[n];
   cout<<"Enter the size of array:";
   cin>>n;
   cout<<"Enter the array"<<endl;
  
   for(i =0;i < n ; i++)
   {
       cin>>arr[i];
   } 
 cout<<"The array is:"<<endl;
    for(i =0;i < n ; i++)
   {
       cout<<arr[i]<<" ";
   } 
   
  
   return 0;
}