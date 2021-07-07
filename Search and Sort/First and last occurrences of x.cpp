//using Binary Search
int helper(int arr[], int n, int x , int tog){
    int l = 0;
    int h = n-1;
    int ans = -1;
    while(l <= h){
        int mid = (l+h)/2;
        if(arr[mid] > x){
            h = mid - 1;
        }else if(arr[mid] < x){
            l = mid + 1;
        }else{
            ans = mid;
            if(tog == -1){
                h = mid+tog;
            }else{
                l = mid+tog;
            }
        }
    }
    return ans;
}

vector<int> find(int arr[], int n , int x )
{
    vector<int> v;
    int ind1 = helper(arr,n,x,-1);
    v.push_back(ind1);
    int ind2 = helper(arr,n,x,1);
    v.push_back(ind2);
    
    return v;
    
}


