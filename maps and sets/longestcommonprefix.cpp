#include<bits/stdc++.h>
using namespace std; 
int main()
{
    vector <string> v; 

    v.push_back("Flower"); 
    v.push_back("Flow"); 
    v.push_back("Flight");
    v.push_back("Flute");


    map <string,int>  mp;

    for(auto i : v)
    {
        mp[i]++;
    } 

    for(auto i : mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }



}