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

    set <int> s; 

    for(auto x : v)
    {
        s.insert(x);
    }

    for(auto x  : s)
    {
    cout<<x<<" ";
    }

    
}