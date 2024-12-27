#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    void display(vector<int>& a){
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
        cout<<"enter elements: ";
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    int i = 0;
    int j = v.size()-1;
   /* while(i <= j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }*/
   /* for(int i = 0, j = v.size()-1; i <= j; i++, j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }*/
    reverse(v.begin(),v.end());
    display(v);
}