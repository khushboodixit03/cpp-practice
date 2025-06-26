#include<iostream>
#include<vector>
using namespace std;
int odd_and_even(vector<vector<int>>&v, int n, int m){

    int even = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(v[i][j] % 2 == 0) even++;
        }
    }

    return even;
    
}

int even_and_odd(vector<vector<int>>&v, int n, int m){

    int odd = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(v[i][j] % 2 != 0) odd++;
        }
    }
    return odd;
}
int main(){

    int n;
    cout<<"enter the size of row: ";
    cin>>n;

    int m;
    cout<<"enter the size of column: ";
    cin>>m;

    vector<vector<int>>v(n,vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m ; j++){
            cin>>v[i][j];
        }
    }
    cout<<odd_and_even(v,n,m);
    cout<<even_and_odd(v,n,m);
}