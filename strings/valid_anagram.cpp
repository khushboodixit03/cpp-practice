#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
bool anagram(string s, string t){
int n = s.length();
int m = t.length();
sort(s.begin(), s.end());
sort(t.begin(), t.end());
for(int i = 0; i < n; i++){
    if(s[i] != t[i]) return false;
}
return true;
}
int main(){
    string s;
    cout<<"enter string 1 : ";
    cin>>s;
    string t;
    cout<<"enter string 2 : ";
    cin>>t;
    cout<<anagram(s,t);
}