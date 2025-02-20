#include<iostream>
#include<vector>
using namespace std;
vector<int> dp;
int coinchange(vector<int> &v,int n, int sum){
    if (sum == 0) return 1;  
    if (n < 0 || sum < 0) return 0; 
    if(dp[n] != -1) return dp[n];
    return dp[n] = coinchange(v,n,sum-v[n]) + coinchange(v,n-1,sum);
}
int main(){
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;
    dp.clear();
    dp.resize(100,-1);
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int sum;
    cout<<"enter sum: ";
    cin>>sum;

    n = v.size()-1;
    cout<<coinchange(v,n,sum);
}