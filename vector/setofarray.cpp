#include<iostream>
using namespace std;
int subset(vector<vector<int>> &final, vector<int> ans, vector<int> &nums, int idx){
    if(idx == nums.size()){
        final.push_back(ans);
        return;
    }
    //recursive call
    //not pick
    subset(final, ans, nums, idx+1);
    ans.push_back(nums[idx]);
    //pick
    subset(final, ans, nums, idx+1);
}
int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }
    
    vector<vector<int>> final;
    vector<int> ans;
    int idx = 0;
    subset(final, ans, nums, 0);
}