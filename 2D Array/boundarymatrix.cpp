#include<iostream>
#include<vector>
using namespace std;
void boundary(vector<vector<int>>& v){
    int n;
    cout<<"enter the size of row: ";
    cin>>n;
    int m;
    cout<<"enter the size of column: ";
    cin>>m;

    for(int j = 0; j < m; j++){
        cout<<v[0][j]<<" ";
    }
    for(int i = 0; i < n; i++){
        cout<<v[i][m-1]<<" ";
    }
    for(int i = n-1; i >= 0; i--){
        cout<<v[n-1][i];
    }

    for(int i = n-1; i >= 0; i--){
        cout<<v[i][0];
    }
    
}
int main(){
    int n;
    cout<<"enter the size of row: ";
    cin>>n;
    int m;
    cout<<"enter the size of column: ";
    cin>>m;

    vector<vector<int>> v;
    for(int i = 0 ; i < n ; i++)
    {
        vector<int> temp;
        for(int j = 0 ; j < m ; j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }

        v.push_back(temp);
    }
    boundary(v);
}