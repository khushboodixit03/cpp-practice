#include<iostream>
#include<vector>
using namespace std;
int peak(vector<int> &v){
    int n = v.size();
    if(n == 1) return v[0];
    for(int i = 1; i < n-1; i++){
        if(v[i-1] < v[i] && v[i+1] < v[i]) return v[i];
    }
    return -1;
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

    cout<<peak(v);
}