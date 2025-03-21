#include<iostream>
#include<string>
#include<unordered_map>
#include<climits>
using namespace std;
void higher_frequency(string s){
    int n = s.length();

    unordered_map<char, int> mp;
    for(int i = 0; i < s.length(); i++){
        mp[s[i]]++;
    }
    int maxi = INT_MIN;
    for(auto x : mp){
        if(x.second > maxi) maxi = x.second;
    }

    for(auto x : mp){
        if(x.second == maxi)  cout<<x.first;
    }
}
int main(){
    string s;
    cout<<"enter string: ";
    cin>>s;
     
    higher_frequency(s);
}