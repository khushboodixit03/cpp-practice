#include<iostream>
#include<vector>
using namespace std;

vector<int> rearrange(vector<int>&v){

    int n = v.size();

    vector<int> ans(n);
    int j = 0;
    for(int i = 0; i < n; i++){
        while(j < n)
        {
            if(v[i] > 0){
                ans[j] = v[i];
                j += 2;
            }
        }
    }

    j = 1; 
    for(int i = 0; i < n; i++){

        while(j < n){
            if(v[j] < 0){
                ans[j] = v[i];
                j += 2;
            }
        }
    }
    return ans;
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

    vector<int> ans = rearrange(v);

    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}