#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string sort_string(string s){
int n = s.length();
sort(s.begin(), s.end());
return s;
}
int main(){
    string s;
    cout<<"enter string: ";
    cin>>s;
    cout<<sort_string(s);
}