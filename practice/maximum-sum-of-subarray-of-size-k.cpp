#include<iostream>
#include<vector>
using namespace std;
int maximum_sum(vector<int>&v, int k){

    int n = v.size();

    int window_sum = 0;
    int max_sum = 0;

    for(int i = 0; i < k; i++){

        window_sum += v[i];

    }

    max_sum = window_sum;

    for(int i = k; i < n; i++){

        window_sum += v[i] - v[i - k];

        max_sum = max(window_sum, max_sum);

    }

    return max_sum;
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

    int k;
    cout<<"enter the window size: ";
    cin>>k;

    cout<<maximum_sum(v,k);
}