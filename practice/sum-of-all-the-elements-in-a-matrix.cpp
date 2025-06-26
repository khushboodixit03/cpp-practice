#include<iostream>
#include<vector>
using namespace std;
int transpose(vector<vector<int>>&v, int n, int m){

   int sum = 0;

    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){

            sum += v[i][j];
        }
    }
    return sum;
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

    cout<<transpose(v,n,m);
}  