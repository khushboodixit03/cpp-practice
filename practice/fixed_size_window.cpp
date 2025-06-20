#include<iostream>
#include<vector>
using namespace std;
int sliding_window(vector<int>&v, int k){

    int n = v.size();
    int i = 0;
    int sum = 0;
    int max_sum = 0;
    int j = k-1;

    for(int i = 0; i <= j; i++){

        sum += v[i];
    }

    max_sum = sum;

    while(j+1 < n){
        
        sum = sum + v[j+1] - v[i];
        i++;
        j++;
        max_sum = max(max_sum, sum);
    }

    return max_sum;
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

    int k;
    cout<<"enter the window size: ";
    cin>>k;

    cout<<sliding_window(v,k);
}