#include<iostream>
#include<vector>
using namespace std;
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

   int mid = n/2;


    cout<<v[mid];


}