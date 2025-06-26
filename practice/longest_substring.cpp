#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
int main(){

    string s;
    cout<<"enter the string: ";
    cin>>s;

    unordered_set<char> t;

    int i = 0;
    int j = 0;

    int max_size = 0;

    while(j < s.length()){

        if(t.find(s[j]) == t.end())
        {
            t.insert(s[j]);
            j++;
            max_size = max(max_size,j-i);
        }

        else{
            t.erase(s[i]);
            i++;
        }
    }
    cout<<max_size;
}