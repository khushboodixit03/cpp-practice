#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
bool anagram(string s, string t){
  unordered_map<char, int> mp1;
  unordered_map<char, int> mp2;
  for(int i = 0; i < s.length(); i++){
    mp1[s[i]]++;
  }
  for(int i = 0; i < t.length(); i++){
    mp2[t[i]]++;
  }

  if(mp1 == mp2){
    return true;
  }

  return false;
  
}
int main(){
  string s;
  cin>>s;
  string t;
  cin>>t;
  cout<<anagram(s,t);
}