#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i = 0; i < a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i, int j, vector<int>& v){
    while(i <= j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}
int main(){
    vector<int> v;
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        cout<<"enter elements: ";
        int x;
        cin>>x;
        v.push_back(x);
    }
    reversePart(2,5,v);
    display(v);
}