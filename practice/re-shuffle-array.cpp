#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> shuffle(vector<int>&v){

    int n = v.size();

    int mid = n/2;

    vector<int> ans;

    reverse(v.begin(), v.begin()+mid);


    sort(v.begin()+mid, v.end());

    for(int i = 0; i < n; i++){

        ans.push_back(v[i]);

    }

    return ans;
}
int main(){

    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    vector<int> v;
    for(int i = 0; i < n; i++){

        int x;
        cin>>x;
        v.push_back(x);

    }

   vector<int> ans =  shuffle(v);

   for(int i = 0; i < ans.size(); i++){

    cout<<ans[i]<<" ";

   }
}