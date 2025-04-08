#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter string: ";
    cin>>s;

    char word;
    cout<<"enter word: ";
    cin>>word;

    int i = s.find_first_of(word);
    s.erase(s.begin()+i);

    int j = s.find_last_of(word);
    s.erase(s.begin()+j);

    cout<<s;
}