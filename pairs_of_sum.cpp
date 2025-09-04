#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int pairs(vector<int>& v, int k){

    int n = v.size();

    sort(v.begin(), v.end());

    int count = 0;

    for(int i = 0; i < n; i++){

        for(int j = i+1; j < n; j++){

            if(v[i] + v[j] == k) count++;
        }
    }

    return count;
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
    cout<<"enter the value of target: ";
    cin>>k;

    cout<<pairs(v, k);
}