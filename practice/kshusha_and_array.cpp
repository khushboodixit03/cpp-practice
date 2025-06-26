#include<iostream>
#include<vector>
using namespace std;
int kshusha(vector<int>&v){

    int n = v.size();

    int div = 0;

    while(div < v.size()){

        for(int i = 0; i < n; i++){

            if(v[i] % v[div] != 0){
                 div++;
                 break;
            }
        }
    }

    return v[div];
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

    cout<<kshusha(v);
}