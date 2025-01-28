#include<bits/stdc++.h>
#include<vector>
using namespace std;
int sliding(vector<int> &v){
   int n = v.size();
  
  int maxi = INT_MIN;
  int k = 3;
  for(int i = 0; i < k; i++){
    maxi = max(maxi,v[i]);
  }
  int large = maxi;
  int i = 1; 
  int j = k;
  while(j < n){
    maxi = max(maxi,v[j]);
   if(large > maxi)
     large = maxi;
    i++;
    j++;
  }
  return large;
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
  cout<<sliding(v);
}