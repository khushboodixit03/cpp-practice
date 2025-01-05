#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int firstpositive(vector<int>& v){
  int n = v.size();
  unordered_set<int> s;
  for(int i = 0; i < n; i++){
    s.insert(v[i]);
  }
  int i = 1;
  while(i >= 1){
    if(s.find(i) == s.end()){
      return i;
    }
    i++;
  }
  return i;
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
  cout<<firstpositive(v);
}