#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void insertion(vector<int>& v){
    int n = v.size();
    int val;
    cin>>val;
    v.push_back(val);
    sort(v.begin(), v.end());
cout<<endl;
}

void deletion(vector<int>& v){
    int n = v.size();
    int cal;
    cin>>cal;
    vector<int> ans;
    for(int i = 0; i < n; i++){
        if(v[i] != cal) ans.push_back(v[i]);
    }
    for(int i = 0; i < n; i++){
        cout<<ans[i];
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"entet the size of vector: ";
    cin>>n;

    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    insertion(v);
    for(int i = 0; i < n; i++){
        cout<<v[i];
    }
    deletion(v);
}