#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>& v){
    int n = v.size();
    int i = 0; 
    int j = n-1;
    while(i < j){
        if(v[i] == 0) i++;
        if(v[j] == 1) j--;
        if(i>j) break;
        if(v[i] == 1&& v[j] == 0){
            v[i] = 0;
            v[j] = 2;
            i++;
            j--;
        }
    }
}
int main(){
    vector<int> v;
    int n;
    cout<<"eneter the size of vector: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        cout<<"enter the elements: ";
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort01(v);
    for(int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}