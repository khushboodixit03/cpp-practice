#include<iostream>
using namespace std;
void display(int a[]){  //passing reference
    for(int i=0;i<=4;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void change(int b[]){
    b[0]=100;
}
int main(){
    int arr[]={1,4,2,7,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    display(arr);
    change(arr);
    display(arr);
}