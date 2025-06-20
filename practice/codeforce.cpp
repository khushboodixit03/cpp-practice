#include<iostream>
#include<vector>
using namespace std;
int good_array(vector<int>&v){

    int n = v.size();

    int sum = 0;

    for(int i = 0; i < n ; i++){

        sum += v[i];
    }

    for(int i = 0; i < n; i++){

        if(sum - v[i] == v[i]) return i+1;
    }

    return -1;


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
    cout<<good_array(v);
}