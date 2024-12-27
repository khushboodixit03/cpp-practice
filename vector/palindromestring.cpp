#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    int l = 0;
    int r = n-1;
    bool flag = false;
    while(l <= r){
        if(s[l] != s[r])
        flag = false;
        else flag = true;
    l++;
    r--;
    }
  
 cout<<flag;
}