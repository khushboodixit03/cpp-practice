#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n;
    cout<<"enter the size of row: ";
    cin>>n;

    int m;
    cout<<"enter the size of column: ";
    cin>>m;

    vector<vector<int>> v(n,vector<int> (m));

    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){

            cin>>v[i][j];
        }
    }

    for(int i = 0; i < n; i++){

        if(i % 2 == 0){

            for(int j = 0; j < m; j++){

                cout<<v[i][j]<<" ";
            }
        }

        else{

            for(int j = m - 1; j >= 0; j--){

                cout<<v[i][j]<<" ";
            }
        }
    }

    return 0;
}