#include<iostream>
#include<vector>
using namespace std;
vector<int> supermarket(vector<int>&v){

    int n = v.size();
    int target;
    cout<<"enter target: ";
    cin>>target;

    vector<int> ans;

    for(int i = 0; i < n; i++){

        for(int j = 1; j < n; j++){

            if(v[i] + v[j] == target){

                ans.push_back(i);
                ans.push_back(j);
            }
        }
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

    vector<int> ans = supermarket(v);

    for(int i = 0; i < ans.size(); i++){

        cout<<ans[i]<<" ";
    }
}