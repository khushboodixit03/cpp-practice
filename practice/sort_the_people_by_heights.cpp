#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> heights(vector<string>&s, vector<int>&v){

    int n = s.size();
    int m = v.size();

    vector<int> temp = v;
    vector<string> ans;
    sort(v.begin(), v.end());

    for(int i = 0; i < m; i++){
        for(int j = 0 ; j < m ; j++)
        {
            if(temp[i] == v[j]) ans.push_back(s[j]); 
        }
    }

    return ans;
}

int main(){

    int n;
    cout<<"enter the size of string vector: ";
    cin>>n;


    int m;
    cout<<"enter the size of integer vector: ";
    cin>>m;

    vector<string> s;

    for(int i = 0; i < n; i++){

        string t;
        cin>>t;
        s.push_back(t);
    }

    vector<int> v;

    for(int i = 0; i < m; i++){

        int x;
        cin>>x;
        v.push_back(x);
    }

   vector<string> ans =  heights(s,v);

   reverse(ans.begin(), ans.end());

   for(int i = 0; i < ans.size(); i++){

    cout<<ans[i]<<" ";
   }
}