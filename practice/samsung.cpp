#include<iostream>
#include<vector>
using namespace std;
vector<int> leaders(vector<int> &v){
    int n = v.size();
    vector<int> ans;
    ans.push_back(v[n-1]);
    for(int i = n-2; i >= 0; i--){
        if(v[i] > ans[ans.size()-1]){
            ans.push_back(v[i]);
        }
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

    vector<int> ans = leaders(v);
    for(int i = ans.size()-1; i >= 0; i--){
        cout<<ans[i]<<" ";
    }
}