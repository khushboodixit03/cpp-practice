#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool contains_duplicate(vector<int> &v){
int n = v.size();
sort(v.begin(), v.end());
bool flag = false;
for(int i = 0; i < n-1; i++){
    if(v[i] == v[i+1]) flag = true;
}
if(flag == true) return true;
return false;
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
    cout<<contains_duplicate(v);
}