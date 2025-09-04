#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> large_and_small(vector<int>&v){

    int n = v.size();

    sort(v.begin(), v.end());

    return {v[0], v[n-1]};
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
    vector<int> v = large_and_small(v);

    for(int i = 0; i < v.size(); i++){

        cout<<v[i]<<" ";
    }

}