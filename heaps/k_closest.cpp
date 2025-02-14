#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void kclosest(vector<int> &v){
    int n = v.size();
    vector<int> distance;
    
    int x;
    cout<<"enter the value of x: ";
    cin>>x;

    int k;
    cout<<"enter the value of k: ";
    cin>>k;

    for(int i = 0; i < n; i++){
        int dis = abs(v[i] - x);
        distance.push_back(dis);
    }

    priority_queue<pair<int,int>,vector<pair<int,int>> , greater<pair<int,int>>> pq;
    for(int i = 0; i < distance.size(); i++){
        pq.push({distance[i],v[i]});
    }

    vector<int> ans;
    int i = 0;
    while(i <= k){
        ans.push_back(pq.top().second);
        pq.pop();
        i++;
    }
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }

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

     kclosest(v);
}