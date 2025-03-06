#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
bool palindrome(string s){
    int n = s.length(); 
    string t  = s;
    reverse(s.begin(), s.end());
    if(s == t){
        return true;
    }
    return false;
}
int main(){
    string s;
    cout<<"enter string: ";
    cin>>s;

    cout<<palindrome(s);
}