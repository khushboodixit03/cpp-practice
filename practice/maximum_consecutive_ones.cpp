#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void maximum_consecutive_ones(vector<int> &v){
    int n = v.size();
    int count = 0;
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        if(v[i] == 1){ 
            count++;
        maxi = max(count, maxi);
        }
        else count = 0;
        
    }
    cout<<maxi;
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
    maximum_consecutive_ones(v);
}