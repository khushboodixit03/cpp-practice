#include<iostream>
#include<vector>
using namespace std;
vector<int> dp;
int jumping(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(dp[n] != -1) return dp[n];
    return dp[n] = jumping(n-1) + jumping(n-2);
}
int main(){
    int n;
    cout<<"enter base number: ";
    cin>>n;

    dp.clear();
    dp.resize(100,-1);
     cout<<jumping(n);
}