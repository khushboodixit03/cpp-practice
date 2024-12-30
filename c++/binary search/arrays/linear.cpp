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

    cout<<endl;

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

        cout<<endl;
int target;
cin>>target;

for(int i = 0; i < n; i++){
    if(arr[i] == target) 
    cout<<i;

}
}