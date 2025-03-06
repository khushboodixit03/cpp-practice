#include<iostream>
#include<string>
#include<unordered_map>
#include<climits>
using namespace std;
char maximum_character(string s){
    int n = s.length();
    unordered_map<char,int> mp;
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
    }
    int maxi = INT_MIN;
    for(auto i : mp){
        if(i.second > maxi)
        maxi = i.second;
    }
    for(auto i : mp){
        if(i.second == maxi)
        return i.first;
    }
    return 0;
}
int main(){
    string s;
    cout<<"enter your string: ";
    cin>>s;

    cout<<maximum_character(s);
}