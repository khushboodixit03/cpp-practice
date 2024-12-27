#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cout<<"enter the array elements: ";
        cin>>arr[i];
    }
    int lo = 0;
    int hi = n-1;
    int target;
    cout<<"enter your target: ";
    cin>>target;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(arr[mid] == target){
            cout<<mid;
            return 0;
        }
        
        else if(arr[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    cout << "Target not found"; 
    return 0;
}