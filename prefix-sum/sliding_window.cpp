#include<iostream>
#include<vector>
using namespace std;
int sliding(vector<int> &v){
   int n = v.size();
  
  int sum = 0;
  int k = 3;
  for(int i = 0; i < k; i++){
    sum = sum + v[i];
  }
  int maxsum = sum;
  int i = 1; 
  int j = k;
  while(j < n){
    sum = sum + v[j] - v[i-1];
    if(sum > maxsum)
      maxsum = sum;
    i++;
    j++;
  }
  return maxsum;
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