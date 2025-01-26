#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
int main()
{
    vector<int> v; 

    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(2);
    v.push_back(2);

    unordered_map<int,int> mp; 

    for(int i = 0 ; i < v.size() ; i ++)
    {
        mp[v[i]]++;
    }

    for(auto i : mp)
    {
        cout<<i.first<<" "<<i.second;
        cout<<endl; 
    } 
    
    return 0;
}