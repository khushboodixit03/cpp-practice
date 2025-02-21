#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
vector<int> two_sum(vector<int> &v, int target){
    int n = v.size();
    sort(v.begin(), v.end());
    for(int i = 0; i < n-1; i++){
        for(int j = 1; j < n; j++){
            if(v[i] + v[j] == target)
            return {i,j};
        }
    }
    return {-1,-1};

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
    cout<<"enter your target value: ";
    cin>>target;
    vector<int> ans = two_sum(v, target);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}