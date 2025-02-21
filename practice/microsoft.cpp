#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int missing(vector<int> &v, int k){
    int n = v.size();
    sort(v.begin(), v.end());
    vector<int> ans(v[n-1]+1, 0);
    for(int i = 0; i < n; i++){
        ans[v[i]] = v[i];
    }
    vector<int> idx;
    for(int i = 0; i < ans.size(); i++){
        if(ans[i] == 0){
            idx.push_back(i);
        }
    }
    return idx[k-1];
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
    int k;
    cout<<"enter the value of k: ";
    cin>>k;
    cout<<missing(v, k);
}