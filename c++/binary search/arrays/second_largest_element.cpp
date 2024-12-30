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

    int maxi = INT_MIN;
    
    for(int i = 0; i < n; i++){
        if(arr[i] > maxi) maxi = arr[i];
    }

    cout<<maxi;
    
cout<<endl;

int s_maxi = INT_MIN;

for(int i = 0; i < n; i++){
    if(arr[i] > s_maxi && arr[i] != maxi) s_maxi = arr[i];
}

cout<<s_maxi;

}