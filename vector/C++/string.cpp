#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "khushboo";
    int n = s.length();
    for(int i = 0; i < s.length(); i++){
        cout<<s.substr(n,i)<<endl;
    }
}