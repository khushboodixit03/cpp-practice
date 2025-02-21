#include<iostream>
#include<vector>
using namespace std;
vector<int> juspay(vector<int> &v){
    int n = v.size();
    vector<int> x;
    for(int i = 0; i < n; i++){
        if(v[i] < 0)
            x.push_back(v[i]);
    }
    vector<int> y;
    for(int i = 0; i < n; i++){
        if(v[i] > 0)
        y.push_back(v[i]);
    }
    vector<int> ans;
    for(int i = 0; i < max(x.size(), y.size()); i++){
        ans.push_back(x[i]);
        ans.push_back(y[i]);
    }
    return ans;
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
     vector<int> ans = juspay(v);
     for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
     }
}