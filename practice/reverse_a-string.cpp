#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    string s;
    cout<<"enter the string: ";
    cin>>s;

    reverse(s.begin(), s.end());

    cout<<s;
}  