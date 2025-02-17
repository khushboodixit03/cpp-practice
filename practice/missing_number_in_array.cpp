#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void missing_number(vector<int> &v){
    int n = v.size();
    sort(v.begin(), v.end());
for(int i = 0; i < n; i++){
    if(v[i] != i+1){
        cout<<i+1;
    }
}
}
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    missing_number(v);
}