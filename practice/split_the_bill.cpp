#include<iostream>
#include<vector>
using namespace std;

vector<int> bill(vector<int>&v, int t){

    int n = v.size();

    int total = 0;

    vector<int> ans;

    for(int i = 0; i < n; i++){

        total += v[i];
    }

    int division = t/total;

    for(int i = 0; i < n; i++){

        v[i] *= division;

        ans.push_back(v[i]);
    }

    return ans;


}

int main(){

    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    vector<int> v;

    for(int i = 0; i < n; i++){

        int x;
        cin>>x;
        v.push_back(x);
    }

    int t;
    cout<<"enter the readings: ";
    cin>>t;

    vector<int> ans = bill(v, t);

    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}