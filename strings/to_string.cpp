#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int a = 1234;
    int b = 5678;
    string c = to_string(a);
    string d = to_string(b);
    c = c + d;
     reverse(c.begin(), c.end());
    c.erase(c.begin()+4);
    cout<<c;
}