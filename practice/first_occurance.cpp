#include<iostream>
#include<vector>
using namespace std;
void first_occurance(vector<int>& v, int k){
    int n = v.size();
    int first = -1;
    int last = -1;
    for(int i = 0; i < n; i++){
        if(v[i] == k){
            first = i;
            break;
        }
    }
    for(int i = n-1; i >= 0; i--){
        if(v[i] == k){
            cout<<"last index = "<<i;
        break;
        }
    }
    if(first == -1) cout<<"index is not found";
}

int main(){
    int n;
    cin>>n;

    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cin>>k;
    first_occurance(v,k);
}