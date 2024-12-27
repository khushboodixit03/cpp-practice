#include<iostream>
using namespace std;
int add(int arr[], int n, int sum, int idx){
    if(sum == 0) return 0;
    return add(arr, n, sum, idx+1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int sum = 0;
    int idx = 0;
    cout<<add(arr, n, 0, 0);
}