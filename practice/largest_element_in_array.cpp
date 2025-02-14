#include<bits/stdc++.h>
using namespace std;
int largestelement(vector<int> &v){
int n = v.size();
int maxi = INT_MIN;
for(int i = 0; i < n; i++){
if(v[i] > maxi) maxi = v[i];
}
return maxi;
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
        
        cout<<largestelement(v);
    
}