#include<iostream>
#include<string>
using namespace std;
int main(){

    string s;
    cout<<"enter the string: ";
    getline(cin,s);

    string result = "";
    for(int i = 0; i < s.length(); i++){

        if(isalnum(s[i])) result += s[i];
    }

    cout<<result;
}
