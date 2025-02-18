#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
bool contains_duplicate(vector<int> &v){
    int n = v.size();
    unordered_set<int> s;
    for(int i = 0; i < n; i++){
        s.insert(v[i]);
    }
    if(s.size() != v.size()) return true;
    return false;
}
int main(){
    int n;
    cout<<"entre the size of vector: ";
    cin>>n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<contains_duplicate(v);
}