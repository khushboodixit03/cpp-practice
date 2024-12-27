#include<iostream>
using namespace std;
void print(int x, int n){
    if(x>n) return;
    cout<<x<<" ";
    print(x+2,n);
}
int main(){
    int a;
    cout<<"enter a: ";
    cin>>a;
    int b;
    cout<<"enter b: ";
    cin>>b;
    if(a%2 == 0) a++;
    print(a,b);
}