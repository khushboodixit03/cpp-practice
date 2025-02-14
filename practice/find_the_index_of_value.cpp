#include<iostream>
#include<vector>
using namespace std;
int find_val(vector<int> &v, int value){
    int n = v.size();
    for(int i = 0; i < n; i++){
        if(v[i] == value){
            return i;
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
    int value;
    cout<<"enter the value: ";
    cin>>value;

    cout<<find_val(v,value);
}