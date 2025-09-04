#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void frequency(vector<int>&v){

    int n = v.size();

    unordered_map<int,int> mp;

    for(int i = 0; i < n; i++){

        mp[v[i]]++;

    }

    vector<int> ans;

    for(auto i : mp){

        ans.push_back(i.second);

    }

    for(int i = 0; i < ans.size(); i++){

        cout<<ans[i]<<" ";
        
    }
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

    frequency(v);
}