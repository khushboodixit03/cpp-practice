#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
int main(){

    string s;
    cout<<"enter string: ";
    cin>>s;

    unordered_set<char> st;
    string result = "";

    for(int i = 0; i < s.length(); i++){

        st.insert(s[i]);
    }

   for(auto i : st){

    result += i;
   }

   cout<<result;

}