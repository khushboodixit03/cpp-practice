#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> transpose_of_matrix(vector<vector<int>>& v, int n, int m){

    vector<vector<int>> ans(m, vector<int>(n));

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

    vector<vector<int>> v;
    for(int i = 0; i < n; i++){
        vector<int> temp;
        for(int j = 0; j < m; j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    vector<vector<int>> ans = transpose_of_matrix(v,n,m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<ans[i][j]<<" ";
        }
    }
}