#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string s;
  cout<<"enter string: ";
  getline(cin,s);
  string t;
  
  t.push_back(s[0]);
  int n = s.length(); 
  string val = to_string(n); 
  t.append(val);
  t.push_back(s[s.length()-1]);  
  cout<<t;

}