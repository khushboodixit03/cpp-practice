#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    cout<<s.size()<<endl; 
    for(int i:s){
        cout<<i;
    }
   
/**/
}