#include<iostream>
#include<unordered_map>
#include<queue>
using namespace std;
int main(){
    int arr[] = {3,3,3,1,1,2,2,2,0,4,4,4};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;
    unordered_map<int,int> mp;
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }
    priority_queue<pair<int,int>> pq;
    for(auto i : mp){
        pq.push({i.second,i.first});
    }
    int val = 0;
    while(val < k){
        ans.push_back(pq.top().second);
        pq.pop();
        val++;
    }
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}