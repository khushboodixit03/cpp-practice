#include<iostream>
#include<vector>
using namespace std;
void even_and_odd(vector<int>&v){

    int n = v.size();

    int even = 0;
    int odd = 0;

    for(int i = 0; i < n; i++){

        if(v[i] % 2 == 0) cout<<v[i]<<" ";
    }

    cout<<endl;

    for(int i = 0; i < n; i++){

        if(v[i] % 2 != 0) cout<<v[i]<<" ";
    }

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

    even_and_odd(v);
}