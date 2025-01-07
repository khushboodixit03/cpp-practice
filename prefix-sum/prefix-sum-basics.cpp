#include<iostream>
#include<vector>
using namespace std;
vector<int> prefixsum(vector<int> &v){
  int n = v.size();
  vector<int> pre(n);
  pre[0] = v[0];
  for(int i = 1; i < n; i++){
    pre[i] = pre[i-1] + v[i];
  }
  return pre;
}
int main(){
  int n;
  cout<<"enter the size of vector: ";
  cin>>n;
  vector<int> v;
  for(int i = 0; i < n; i++){
    int x;
    cin>>x;
    v.push_back(x);
  }
  vector<int> ans = prefixsum(v);
  for(int i = 0; i < n; i++){
    cout<<ans[i];
  }
}