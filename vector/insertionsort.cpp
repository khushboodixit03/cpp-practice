#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout<<"enter array elements: ";
        cin>>arr[i];
    }
    cout<<"array elements: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // for passes
    for(int i = 1; i < n; i++){

       int j = i;

       while(j >= 1){

        if(arr[j] > arr[j-1]) break;
        else swap(arr[j],arr[j-1]);

        j--;
       }
    }


    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }


    cout<<endl;
}