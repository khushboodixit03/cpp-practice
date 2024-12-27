#include<iostream>
#include<string>
using namespace std;
int main(){
    string s ;
    cin>>s;
    int n = s.size()-1;
    int i = 0; 
    int j = n;
    while(i < j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
    cout<<s;
}
