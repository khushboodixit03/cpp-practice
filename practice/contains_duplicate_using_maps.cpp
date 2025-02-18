#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool duplicate(vector<int> &v){
    int n = v.size();
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++){
        mp[v[i]]++;
    }
    for(auto x : mp){
        if(x.second > 1) return true;
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
    cout<<duplicate(v);
}