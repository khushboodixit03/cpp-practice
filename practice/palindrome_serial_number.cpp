#include<iostream>
#include<string>
using namespace std;
int main(){

    string s;
    cout<<"enter the string: ";
    cin>>s;

    int i = 0; 
    int j = s.length()-1;

    while(i < j){

        if(s[i] != s[j]) {
        cout<<"false";
        break;
        }
        

        i++; 
        j--;
    }
    cout<<"true";
}