#include<iostream>
#include<queue>
#include<vector>
using namespace std;
void laststone(vector<int> &v){
    int n = v.size();
    priority_queue<int> pq;
    for(int i = 0; i < n; i++){
        pq.push(v[i]);
    }
    while(pq.size()>1){
        int p;
        int k;
        p = pq.top();
        pq.pop();
        k = pq.top();
        pq.pop();
        int diff = p - k;
        pq.push(diff);
    }
    vector<int> ans;
    ans.push_back(pq.top());
    cout<<ans[0]; 
}
int main(){
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;
    
    vector<int> v;
     for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
     }
     laststone(v);
}