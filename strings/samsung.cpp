#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
string remove_duplicate(string s){
    int n = s.length();
    unordered_set<char> st;
    for(int i = 0; i < n; i++){
        st.insert(s[i]);
    }
    string ans = "";
    for(auto i : st){
        ans.push_back(i);
    }
    return ans;
}
int main(){
    string s;
    cout<<"enter your string: ";
    cin>>s;
    cout<<remove_duplicate(s);
}