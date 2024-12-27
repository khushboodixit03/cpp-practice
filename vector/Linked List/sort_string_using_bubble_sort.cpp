#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "khushboo";
    int n = s.size();
    cout<<s<<endl;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            if(s[j] > s[j+1])
{
    swap(s[j], s[j+1]);
}        }
    }
    cout<<s;
}