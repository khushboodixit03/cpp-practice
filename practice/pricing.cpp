#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

vector<int> pricing(vector<int>&v){

    int n = v.size();

    sort(v.begin(), v.end());

    vector<int> ans;

    for(int i = 0; i < n; i++){

        if(v[i] != i+1) ans.push_back(i+1);
    }

    unordered_map<int,int> mp;

    for(int i = 0; i < n; i++){

        mp[v[i]]++;
    }

    for(auto i : mp){

        if(i.second > 1) ans.push_back(i.first);
    }

    return ans;


}
int main(){

    int n;
    cout<<"enter the sizeof array: ";
    cin>>n;

    vector<int> v;

    for(int i = 0; i < n; i++){

        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> ans = pricing(v);

    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}