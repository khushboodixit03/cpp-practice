#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;
    vector<vector<int>> ans;
    for(int i = 0; i < n; i++){
        vector<int> temp;
        for(int j = 0; j < n; j++){
        int num;
        cin>>num;
        temp.push_back(num);
        }
        ans.push_back(temp);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<ans[i][j]<<" ";
        }
    }
    cout<<endl;
    for(int j = 0; j < n; j++){
        cout<<ans[0][j]<<" ";
    }
    cout<<endl;
    for(int j = 0; j < n; j++){
        cout<<ans[n-1][j]<<" ";
    }


}