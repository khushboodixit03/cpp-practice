#include<iostream>
#include<vector>
using namespace std;
int sum(vector<int>&v){

    int n = v.size();

    int sum = 0;

    for(int i = 0; i < n; i++){

        sum += v[i];

    }

    return sum;
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

    cout<<sum(v);
}