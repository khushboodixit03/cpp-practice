#include<iostream>
#include<algorithm>
using namespace std;
int minimum(int arr[], int n){
sort(arr.begin(), arr.end());
return arr[0];
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    minimum(arr,n);
}