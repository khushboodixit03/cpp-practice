#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> parity(vector<int>& v){

    int n = v.size();

    vector<int> ans;

    for(int i = 0; i < n; i++){

        if(v[i] % 2 == 0)
        ans.push_back(v[i]);                     
    }

    for(int i = 0; i < n; i++){

        if(v[i] % 2 != 0)
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

    vector<int> ans = parity(v);

    for(int i = 0; i < ans.size(); i++){

        cout<<ans[i]<<" "
    }

}