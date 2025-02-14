#include<iostream>
#include<vector>
using namespace std;
vector<int>  move_zeros_to_end(vector<int> &v){
    int n = v.size();
    vector<int> p;

    for(int i = 0; i < n; i++){
        if(v[i] != 0){
            p.push_back(v[i]);
        }
    }
    
    for(int i = 0; i < n; i++){
        if(v[i] == 0)
        p.push_back(v[i]);
    }
    return p;
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

    vector<int> ans = move_zeros_to_end(v);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}