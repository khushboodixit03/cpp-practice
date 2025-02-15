#include<iostream>
#include<vector>
using namespace std;

vector<int> union_of_array(vector<int> &v, vector<int> &z){
    int n = v.size();
    int m = z.size();
    vector<int> ans;

    for(int i = 0; i < n; i++){
        ans.push_back(v[i]);
    }

    for(int i = 0; i < m; i++){
        ans.push_back(z[i]);
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the size of vector 1 : ";
    cin>>n;
    cout<<endl;
    int m;
    cout<<"enter the size of vector 2: ";
    cin>>m;
    cout<<endl;

    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;

    vector<int> z;
    for(int i = 0; i < m; i++){
        int y;
        cin>>y;
        z.push_back(y);
    }
    cout<<endl;

     vector<int> ans = union_of_array(v,z);
     for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
     }
}