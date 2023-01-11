#include <iostream>

using namespace std;

void reverse(int i,int a[20],int n){
    if(i>=(n/2))
    return;
    else{
        swap(a[i],a[n-i-1]);
        reverse(i+1,a,n);
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(0,arr,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<',';
    }
    return 0;
}
