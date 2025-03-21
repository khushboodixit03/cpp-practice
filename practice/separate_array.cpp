#include<iostream>
#include<vector>
using namespace std;
vector<int> odd_wise(vector<int>& v){
    int n = v.size();

    vector<int> ans;

    for(int i = 0; i < n; i++){
        if(v[i] % 2 != 0) ans.push_back(v[i]);
    }

    for(int i = 0; i < n; i++){
        if(v[i] % 2 == 0) ans.push_back(v[i]);
    }
    return ans; //time complexity = O(n)
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
    
     vector<int> ans = odd_wise(v);
     
     for(int i = 0; i < n; i++){
        cout<<ans[i]<<" ";
     }
}