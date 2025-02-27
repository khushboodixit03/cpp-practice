#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int n;
cout<<"enter the size of vector: ";
cin>>n;
int k;
cout<<"enter k: ";
cin>>k;
vector<int> v;
for(int i = 0; i < n; i++){
    int x;
    cin>>x;
    v.push_back(x);
}
reverse(v.begin(), v.end());
reverse(v.begin(), v.begin()+k);
reverse(v.begin()+k, v.end());
for(int i = 0; i < n; i++){
    cout<<v[i]<<" ";
}
}