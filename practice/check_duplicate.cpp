#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool duplicate(vector<int>&v){

    int n = v.size();

    unordered_map<int,int> mp;

    for(int i = 0; i < n; i++){

        mp[v[i]]++;

    }

    for(auto i : mp){
        
        if(i.second > 1) return true;

    }

    return false;
}
int main(){

    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    vector<int> v;

    for(int i = 0; i < n; i++){

        int x;
        cin>>x;
        v.push_back(x);

    }

    cout<<duplicate(v);
}