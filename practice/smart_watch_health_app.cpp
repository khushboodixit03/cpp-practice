#include<iostream>
#include<string>
using namespace std;
int main(){

    string s;
    cout<<"enter the string: ";
    cin>>s;

    int vowel = 0;
    int consonant = 0;
    int digits = 0; 
    int special_char = 0;

    for(int i = 0; i < s.length(); i++){

        if(isalpha(s[i])){

             if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')

             vowel++;

             else consonant++;
    }

        else if(isdigit(s[i])) digits++;

        else special_char++;

        }

        cout<<vowel<<","<<consonant<<","<<digits<<","<<special_char;

    }