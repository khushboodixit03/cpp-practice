#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    
    for(int i = 0; i < n; i++){
        cout<<arr[i];
    }
    cout<<endl;

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            if(arr[j] < arr[j+1])
            swap(arr[j], arr[j+1]);
        }
    }
    cout<<endl;

      for(int i = 0; i < n; i++){
        cout<<arr[i];
    }
}