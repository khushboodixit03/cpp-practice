#include<iostream>
using namespace std;
int add(int brr[], int n){
    if(n == 0){
        return 0;
    }
    return brr[n-1] + add(brr, n-1);
}
int mean(int brr[], int n){
    return {brr[n-1] + add(brr, n-1)}/n;
}
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i <= n-1; i++){
        cout<<"enter array elements: ";
        cin>>arr[i];
    }
    cout<<add(arr, n);
    cout<<mean(arr, n);
}