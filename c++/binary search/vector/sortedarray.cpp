#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int a[n];
    for(int i = 0; i <= n-1; i++){
        cout<<"enter the elements: ";
        cin>>a[n];
    }
    for(int i = 0; i <= n-1; i++){
        if(a[i] < a[i+1])
        cout<<1;
    }
    return 0;
}