#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i <= n-1; i++){
        cout<<"enter the array elements: ";
        cin>>arr[i];
    }
    for(int i = 0; i <= n-1; i++){
    cout<<arr[i]<<" ";
}
}