#include<iostream>
#include<vector>
using namespace std;
vector<int> consecutive(vector<int> &v, int target){
    int n = v.size();
    vector<int> ans;
    for(int i = 0; i < n; i++){
        if(v[i] == target){
            ans.push_back(i);
            break;
        }
    }
    for(int j = n-1; j >= 0; j--){
        if(v[j] == target){
            ans.push_back(j);
            break;
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
int target;
cout<<"enter the target value: ";
cin>>target;
 vector<int> ans = consecutive(v, target);
 for(int i = 0; i < ans.size(); i++){
    cout<<ans[i]<<" ";
 }
}
