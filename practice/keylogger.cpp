#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    string log;
    cout<<"enter log: ";
    cin>>log;

    string pattern;
    cout<<"enter pattern: ";
    cin>>pattern;

    vector<int> ans;

    int k = pattern.size();

     string s = "";

    for(int i = 0; i <= k-1; i++){

        s += log[i];
    }

    sort(s.begin(), s.end());

    if(s == pattern) ans.push_back(0); 

    int i = 0 ; 
    int j = k-1;

    while(j+1 < log.length())
    {
        s.erase(s.begin()); 
        s += log[j+1];

        sort(s.begin(),s.end()); 

        if(s == pattern) ans.push_back(i); 

        i++;
        j++;
    }

    for(int i = 0 ; i < ans.size() ; i++)
    {
        cout<<ans[i];
    }



}