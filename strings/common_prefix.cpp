#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
string common_prefix(vector<string> &v){
    sort(v.begin(), v.end());
    string a = v[0];
    string b = v[v.size()-1];
    string ans = "";

    for(int i = 0; i < a.length(); i++){
        if(a[i] == b[i]) ans += a[i];
    }
    return ans;
}
int main(){
int n;
cout<<"enter the size of vector: ";
cin>>n;

vector<string> v;
for(int i = 0; i < n; i++){
    string x;
    cin>>x;
    v.push_back(x);
}
    cout<<common_prefix(v);
}