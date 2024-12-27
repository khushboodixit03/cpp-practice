#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(1);
    for(int i = 0; i < v.size(); i++ ){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++ ){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int max_count = 0;
    for(int i = 0; i < v.size(); i++){
         int count = 0;
        for(int j = 0; j < v.size(); j++){
        if(v[i] == v[j])
         count++;
        }
        max_count = max(count, max_count);
    }
    cout<<max_count;
}