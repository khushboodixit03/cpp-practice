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
    int lo = 0;
    int hi = n-1;
    int x;
    cout<<"enter your target value: ";
    cin>>x;
    bool flag = false;
    while(lo <= hi){
        int mid = lo + (hi - lo)/2;
        if(arr[mid] == x){
        flag = true;
        cout<<arr[mid+1];
        break;
        }
        else if(arr[mid] < x) lo = mid + 1;
        else hi = mid - 1;
    }
    if(flag == false) cout<<arr[hi];
    }