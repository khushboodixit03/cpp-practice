#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool contains_duplicate(vector<int> &v){
int n = v.size();
sort(v.begin(), v.end());
for(int i = 0; i < n; i++){
    if(v[i] == v[i+1]) cout<<"true";
}
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
     contains_duplicate(v);
}