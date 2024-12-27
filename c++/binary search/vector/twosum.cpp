#include<iostream>
#include<vector>
using namespace std;
int main(){
    int target;
    cout<<"enter your target: ";
    cin>>target;
    vector<int> v;
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i = 0; i < v.size()-2; i++){
        for(int j = i+1; j < v.size(); j++){
            if(v[i]+v[j]==target)
            cout<<i<<","<<j<<endl;
        }
    }
}