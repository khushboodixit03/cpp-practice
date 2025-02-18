#include<iostream>
#include<climits>
#include<vector>
using namespace std;
vector<int> dp;
int operations(int n){
    if(n==1) return 0; 
    if(n==2 or n == 3) return 1;
    if(dp[n] != -1) return dp[n];
    return dp[n] = 1 +  min(operations(n-1),min(n%2==0 ? operations(n/2) : INT_MAX , n%3 == 0 ? operations(n/3) : INT_MAX));
}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    dp.clear();
    dp.resize(100,-1);
    cout<<operations(n);

}