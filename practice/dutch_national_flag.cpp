#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

vector<int> dutchflag(vector<int> &v){
    int n = v.size();
    int lo = 0;
    int mid = 0;
    int hi = n-1;

    while(mid <= hi){
        if(v[mid] == 0){
            swap(v[lo], v[mid]);
            lo++;
            mid++;
        }
        else if(v[mid] == 1){
            mid++;
        }
        else{
            swap(v[mid], v[hi]);
            hi--;
        }
    }
    return v;
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
    vector<int> ans = dutchflag(v);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}