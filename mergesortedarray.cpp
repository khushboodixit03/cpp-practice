#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>& arr1, vector<int>& arr2){
    int n = arr1.size();
    int m = arr2.size();
    vector<int> res(m+n);
    int i = 0;
    int j = 0;
    int k = 0;
    while(i <= n-1 && j <= m-1){
        if(arr1[i] < arr2[j]){
            res[k] = arr1[i];
            i++;
            k++;
        }
        else{
            res[k] = arr2[j];
            j++;
            k++;
        }
        if(i == n){
            while(j <= m-1){
                res[k] = arr2[j];
                k++;
                j++;
            }
        }
        if(j == m){
            while(i <= n-1){
                res[k] = arr1[i];
                k++;
                i++;
            }
        }
    }
    return res;
}
int main(){
    vector<int> arr1;
    int n;
    cout<<"enter the size of vector1: ";
    cin>>n;
    int m;
    cout<<"enter the size of vector2: ";
    cin>>m;
    for(int i = 0; i < n; i++){
        cout<<"enter the elements of vector1: ";
        int x;
        cin>>x;
        arr1.push_back(x);
    }
    for(int i = 0; i < arr1.size(); i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    vector<int> arr2;
    for(int i = 0; i < m; i++){
        cout<<"enter the elements vector2: ";
        int y;
        cin>>y;
        arr2.push_back(y);
    }
    for(int i = 0; i < arr2.size(); i++){
        cout<<arr2[i]<<" ";
}
cout<<endl;
vector<int> v = merge(arr1,arr2);
for(int i = 0; i < v.size(); i++){
    cout<<v[i]<<" ";
}
}