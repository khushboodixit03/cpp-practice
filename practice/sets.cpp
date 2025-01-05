#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;
int missingnumber(vector<int>& v){
  int n = v.size();
  unordered_set<int> s;
  for(int i = 0; i < n; i++){
    s.insert(v[i]);
  }
  int val = 0;
  while(val>=0){
    if(s.find(val) != s.end()) val++;
    else return val;
    }
  return n;
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
  cout<<missingnumber(v);
}