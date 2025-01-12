#include<iostream>
#include<vector>
using namespace std;
vector<int> suffixsum(vector<int>& v){
  int n = v.size();
  vector<int> suff(n);
  suff[n-1] = v[n-1];
  for(int i = n-2; i >= 0; i--){
    suff[i] = v[i] * suff[i+1];
  }
  return suff;
  
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
vector<int> ans = suffixsum(v);
  for(int i = 0; i < n; i++){
    cout<<ans[i]<<" ";
  }
}
