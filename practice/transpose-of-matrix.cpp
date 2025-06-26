#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>>&v, int n, int m){

    vector<vector<int>> ans(n,vector<int>(m));

    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){

            ans[i][j] = v[j][i];
        }
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

    vector<vector<int>> v(n,vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){

            cin>>v[i][j];
        }
    }

   vector<vector<int>> ans = transpose(v,n,m);

   for(int i = 0; i < n; i++){

    for(int j = 0; j < m; j++){

        cout<<ans[i][j]<<" ";
    }
   }
}