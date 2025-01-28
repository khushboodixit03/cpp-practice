#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin()+2, s.end());
    cout<<s;
    cout<<endl;
    int n = s.length();
    swap(s[0], s[n-1]);
    cout<<s;
}