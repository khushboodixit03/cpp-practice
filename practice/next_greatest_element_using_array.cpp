#include<iostream>
#include<vector>
using namespace std;
vector<int> next_greater(vector<int>& v){
    int n = v.size();

    vector<int> ans(n,-1);

    for(int i = n-2; i >= 0; i--){
        for(int j = i+1; j < n; j++){
            if(v[i] < v[j]){
                ans[i] = v[j];
                break;
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

    vector<int> ans = next_greater(v);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}