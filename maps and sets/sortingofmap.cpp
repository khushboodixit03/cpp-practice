#include<bits/stdc++.h>
using namespace std;
static bool compare(pair<int,int>a,pair<int,int>b)
{
    return a.second<b.second;
}


int main()
{   
    vector <int> v1; 
    vector <int> v2;

    for(int i = 0 ; i < 5 ; i++)
    {
        v1.push_back(i);
    }

    
    for(int i = 5 ; i > 0 ; i--)
    {
        v2.push_back(i);
    }

    unordered_map <int,int> mp;
    
    for(int i = 0 ; i < v1.size() ; i++)
    {
        mp[v1[i]] = v2[i]; 
    }

    vector <pair <int,int>>  v3;

    for(auto x : mp)
    {
        v3.push_back(x);
    }

    sort(v3.begin(),v3.end(),compare); 

    for(auto x :  v3)
    {
        cout<<x.first<<" " << x.second<<endl; 
    }

}