#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>& a){
    a[0] = 100;
     for(int i = 0; i < a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
}