#include<iostream>
#include<vector>
using namespace std;
int google(vector<int> &v){
  int n = v.size();
  vector<int> pre(n);
  pre[0] = 0;
  for(int i = 1; i < n; i++){
    pre[i] = pre[i-1] + v[i-1];
  } vector<int> suff(n);
  suff[n-1] = 0;
  for(int i = n-2; i >= 0; i--){
    suff[i] = suff[i+1] + v[i+1];
  }
  for(int i = 0; i < n; i++){
    if(pre[i] == suff[i])
      return i;
  }
  return -1;
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
  cout<<google(v);
  
}