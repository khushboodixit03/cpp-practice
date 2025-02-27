#include<iostream>
#include<vector>
using namespace std;
void equilibrium_point(vector<int> &v){
    int n = v.size();

    vector<int> pre(n);
    pre[0] = v[0];
    for(int i = 1; i < n; i++){
        pre[i] = v[i] + pre[i-1];
    }

    for(int i = 0; i < n; i++){
        cout<<pre[i]<<" ";
    }
    cout<<endl;

    vector<int> suff(n);
    suff[n-1] = v[n-1];
    for(int i = n-2; i >= 0; i--){
        suff[i] = v[i] + suff[i+1];
    }

    for(int i = 0; i < n; i++){
        cout<<suff[i]<<" ";
    }
    cout<<endl;

    for(int i = 0; i < pre.size(); i++){
        if(pre[i] == suff[i]) cout<<"the index is: "<<i;
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

     equilibrium_point(v);
}