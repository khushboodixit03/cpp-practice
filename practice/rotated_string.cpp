#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    string s;
    cout<<"enter the string: ";
    cin>>s;

    string t;
    cout<<"enter another string: ";
    cin>>t;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());


    if(s == t) cout<<true;

    return false;

    }