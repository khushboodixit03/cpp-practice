#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a = 24; 

    int b = 25; 

    int c = a + b; 

    cout<<c; 


    string s = to_string(a);

    string t = to_string(b);

    s = s + t;  

    cout<<s;     


}