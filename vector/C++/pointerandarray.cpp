#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,6,1,7};
    int *ptr = arr;
    cout<<ptr<<endl;
    *ptr=100;
    ptr++;
    *ptr=9;
    
    ptr--;
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";
    }
}