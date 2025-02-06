#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> &v){
  int n = v.size();
  vector<int> ans;
  for(int i = 0; i < n; i++){
     int rev = 0;
    while(v[i] > 0){
       rev = rev * 10 + v[i] % 10;
      v[i] = v[i] / 10;
    }
    ans.push_back(rev); 
  }
  return ans;
}
int main(){
  int n;
  cout<<"enter the size of vector:";
  cin>>n;
  vector<int> v;
  for(int i = 0; i < n; i++){
    int x;
    cin>>x;
    v.push_back(x);
  }
  vector<int> ans = reverse(v);
  for(int i = 0; i < n; i++){
    cout<<ans[i]<<" ";
  }
}