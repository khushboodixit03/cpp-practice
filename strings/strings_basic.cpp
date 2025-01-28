#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    for(int i = 0; i < s1.length(); i++){
        if(i % 2 == 0) cout<<s1[i];
    }
    for(int i = 0; i < s2.length(); i++){
        if(i % 2 == 0)
        cout<<s2[i];
    }
}