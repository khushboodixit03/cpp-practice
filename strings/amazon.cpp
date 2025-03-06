#include<bits/stdc++.h>
using namespace std;
int max_length(string s){
    int t = stoi(s);
    while(t > 0){
        if(t % 2 != 0){
            string u = to_string(t);
           return u.length(); 
        }
        else{
            t = t/10;
        }
    }
    return -1;
}
int main(){
    string s;
    cout<<"enter your string: ";
    cin>>s;

    cout<<max_length(s);

}