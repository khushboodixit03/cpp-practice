#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    string s;
    cout<<"enter the string: ";
    cin>>s;

    string t = s;

    reverse(t.begin(), t.end());

    if(s == t) cout<<"true";

    else{
        cout<<"false";
    }
} 