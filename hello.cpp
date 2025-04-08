#include<iostream>
#include<vector>
using namespace std;
vector<int> f(vector<int>& v, int n, int i, vector<int> &ans){
    if(i == n)  return ans;
    
    ans.push_back(v[i]);
    return f(v,n,i+1,ans);
}
int main(){
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;
     
    int i;
    cin>>i;

    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    
    }

    vector<int> val;

    vector<int> ans = f(v,n,i,val);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}