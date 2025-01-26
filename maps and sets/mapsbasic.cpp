#include<bits/stdc++.h>
using namespace std; 
int main()
{
    vector <int> v;
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);

    map  <int,int> mp;

    for(auto x : v)
    {
        mp[x]++; 
    }

    for(auto x : mp)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }

    for(auto x : mp)
    {
        if(x.second > 1) cout<< x.first; 
    }
    
    return 0;
}