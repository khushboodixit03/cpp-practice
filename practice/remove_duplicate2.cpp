#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
void removeduplicate(vector<int> &v){
    int n = v.size();
    unordered_set<int> s;
    for(int i = 0; i < n; i++){
        s.insert(v[i]);
    }
    for(auto x : s){
        cout<<x<<" ";
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
removeduplicate(v);
}