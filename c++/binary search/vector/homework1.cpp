#include<iostream>
#include<vector>
using namespace std;
int main(){
    int target;
    cout<<"enter your target: ";
    cin>>target;
    vector<int> v;
    int n;
    cout<<"enter the size of vecotr: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i = 0; i < v.size(); i++){
        if(v[i] == target) cout<<v[i];
    }
}