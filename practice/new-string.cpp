#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cout<<"enter the string: ";
    cin>>s;

    string ans;

    ans += s[0];

    int n = s.length();

    ans += to_string(n);

    ans += s[n-1];

    cout<<ans;
}