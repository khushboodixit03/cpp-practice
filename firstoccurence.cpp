#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,3,3,3,3,3,4,4,5,8,9};
    int x;
    cout<<"enter your target:";
    cin>>x;
    int lo = arr[0];
    int hi = arr[12];
    bool flag = false;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == x){
            if(arr[mid-1] != x){
                flag = true;
                cout<<mid;
                break;
            }
            else{
                hi = mid - 1;
            }
        }
            else if(arr[mid] < x) lo = mid+1;
            else hi = mid - 1;
        }
        if(flag == false) cout<<-1;
    }