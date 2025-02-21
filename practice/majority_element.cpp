#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<climits>
using namespace std;
int majority(vector<int> &v){
    int n = v.size();
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++){
        mp[v[i]]++;
    }
    int mid = n/2;
    for(auto i : mp){
        if(i.second > mid)
        return i.first;
    }
    return 1;
}
int main(){
    int n;
    cout<<"enter the size o vector: ";
    cin>>n;

    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<majority(v);
}