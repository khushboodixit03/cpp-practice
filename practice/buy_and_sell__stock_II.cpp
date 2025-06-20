#include<iostream>
#include<vector>
using namespace std;
int buy(vector<int>&v){

    int n = v.size();

    int profit = 0;

    for(int i = 1; i < n; i++){

        if(v[i] > v[i-1])
        
        profit += v[i] - v[i-1];
    }

    return profit;
}
int main(){

    int n;
    cout<<"enter the size of vector: ";
    cin>>n;

    vector<int> v;

    for(int i = 0; i < n; i++){

        int x;
        cin>>x;
        v.push_back(x);

    }

    cout<<buy(v);
}