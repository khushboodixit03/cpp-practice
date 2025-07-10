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

    int target;
    cout<<"enter the target: ";
    cin>>target;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){

            if(v[i][j] == target){
                 cout<<true;
                 break;
            }

        }
    }
}