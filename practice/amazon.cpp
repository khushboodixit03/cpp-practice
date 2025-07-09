#include<iostream>
#include<vector>
using namespace std;
void amazon(vector<int>&v, int q){

    int n = v.size();
    
    for(int i = 0; i < n; i++){

        if(v[q-2] < v[q-1]){ 
            cout<<v[q-2];
            break;

        }
        else{
            cout<<v[q+2];
            break;
        }
    }

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

    int q;
    cout<<"enter the size of query: ";
    cin>>q;

     amazon(v,q);
}