#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<char> front(string s){

    vector<char> v;

    for(int i = 0; i < s.length(); i++){

        if(s[i] == '#') v.push_back(s[i]);
        
    }
    for(int i = 0; i < s.length(); i++){

        if(s[i] != '#') v.push_back(s[i]);
        
    }

return v;
}
int main(){

    string s;
    cout<<"enter the string: ";
    cin>>s;

    vector<char> v = front(s);

    for(int i = 0; i < v.size(); i++){

        cout<<v[i];
    }

}