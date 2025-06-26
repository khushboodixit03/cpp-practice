#include<iostream>
#include<vector>
using namespace std;
vector<int> sum(vector<vector<int>>&v, int n, int m){

    vector<int> ans;

    for(int i = 0; i < n; i++){

        int sum = 0;

        for(int j = 0; j < m; j++){

            sum += v[i][j];
        }
        ans.push_back(sum);
    }
    return ans;
}
int main(){

    int n;
    cout<<"enter the size of row: ";
    cin>>n;

    int m;
    cout<<"enter the size of column: ";
    cin>>m;

    vector<vector<int>>v(n, vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>v[i][j];
        }
    }
    vector<int> ans = sum(v,n,m);

    for(int i = 0; i < ans.size(); i++){

        cout<<ans[i]<<" ";
    }
}