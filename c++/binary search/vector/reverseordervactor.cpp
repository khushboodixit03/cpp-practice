#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i = 0; i < v.size(); i++){
            cout<<v[i]<<endl;
        }
        for(int i = v.size()-1; i >= 0; i--){
            cout<<v[i]<<" ";
        }
    }