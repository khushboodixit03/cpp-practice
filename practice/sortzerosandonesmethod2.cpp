#include<iostream>
#include<vector>
using namespace std;
void sort01m2(vector<int>& v){
    int n = v.size();
    int i = 0; 
    int j = n-1;
    while(i < j){
        if(v[i] == 0) i++;
        if(v[j] == 1) j--;
        else if(v[i] == 1 && v[j] == 0){
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
    }
}
int main(){
vector<int> v;
int n;
cout<<"enter the size of vector: ";
cin>>n;
for(int i = 0; i < n; i++){
    cout<<"enter array elements: ";
    int x;
    cin>>x;
    v.push_back(x);
}
for(int i = 0; i < v.size(); i++){
    cout<<v[i]<<" ";
}
cout<<endl;
sort01m2(v);
for(int i = 0; i < v.size(); i++){
    cout<<v[i]<<" ";
}
}