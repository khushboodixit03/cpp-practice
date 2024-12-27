#include<iostream>
using namespace std;
int add(int brr[],int m){
    if(m == 0){
        return 0;
    }
    return brr[m-1] + add(brr, m-1);
}
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i = 0; i <= n-1; i++){
        cout<<"enter array elements: ";
        cin>>arr[i];
    }
    cout<<add(arr,n);
}