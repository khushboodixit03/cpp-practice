#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);
    unordered_map<int,int> mp;
    for(int i = 0; i <v.size(); i++){
        mp[v[i]]++;
    }
    cout<<endl;
    unordered_map<string,int> p;
    p["khushboo"] = 87;
    p["parth"] = 40;
    cout<<p["parth"];
    cout<<endl;
    cout<<mp[3];
}