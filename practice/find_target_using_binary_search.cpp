#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binary_search(vector<int> &v , int target){
    int n = v.size();
    int lo = 0;
    int hi = n-1;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;

        if(v[mid] == target)  return mid;

        else if(v[mid] < target) lo = mid + 1;

        else hi = mid - 1;
    }
    return -1;
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

    cout<<binary_search(v,target);
}
