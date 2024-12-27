#include<iostream>
using namespace std; 
int coinchange(int arr[] , int n , int sum)
{
    if(sum==0) return 1;

     if (n <= 0 || sum < 0) return 0;

    return coinchange(arr,n,sum-arr[n-1]) + coinchange(arr,n-1,sum); 
}

int main()

{
    int arr[] = {2,5,3,6}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int sum = 10;

    cout<<coinchange(arr,n,sum);
}