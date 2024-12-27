#include<bits/stdc++.h>
using namespace std;
int missingnumber(vector<int> &nums)
{
    int n = nums.size();
    for(int i = 0; i < n; i++){
        if(nums[i] != i)
        return i;
    }
    return -1;
}
int main()
{
    vector <int> v;
    v.push_back(0); 
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);  

    cout<<missingnumber(v);
}