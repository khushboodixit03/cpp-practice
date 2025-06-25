#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    string message;
    cout<<"enter the message: ";
    cin>>message;

    string spamword;
    cout<<"enter the spamword: ";
    cin>>spamword;

    sort(message.begin(), message.end());
    sort(spamword.begin(), spamword.end());

    if(message == spamword) cout<<"true";
    else cout<<"false";
}