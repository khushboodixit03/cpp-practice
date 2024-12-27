#include<iostream>
using namespace std;
void odd(int n, int i){
    if(i > n) return;
    if(i % 2 == 0) i++;

    cout<<i<<" ";
    odd(n,i+1); 
    
}
int main(){
    int n;
    cin>>n;

    int i = 1;
    odd(n,i);
}