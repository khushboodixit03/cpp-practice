#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> rotate(vector<int> &v){
    int n = v.size();
    int k;
    cout<<"enter the size of k: ";
    cin>>k;
    reverse(v.begin()+k, v.end());
    return v;
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
    vector<int> ans = rotate(v);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}