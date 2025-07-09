#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int second_largest(vector<int>& v){

    int n = v.size();

    int maxi = INT_MIN;

    for(int i = 0; i < n; i++){

        if(v[i] > maxi) maxi = v[i];

    }

    int s_maxi = INT_MIN;

    for(int i = 0; i < n; i++){

        if(v[i] > s_maxi && maxi != v[i]) s_maxi = v[i];
    }

    return s_maxi;
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

    cout<<second_largest(v);
}