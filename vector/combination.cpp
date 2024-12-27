#include<iostream>
using namespace std;
int comb(int n, int r){
    if(n == 0 || n == 1)
    return 1;
    if(n == r) return 1;
    return comb(n-1,r) + comb(n-1, r-1);
}
int main(){
    int n;
    int r;
    cin>>n>>r;
    cout<<comb(n,r);
}