#include<iostream>
#include<queue>
using namespace std; 
int main()
{
    // given 
    int arr[] = {3,4,2,6,5,9};
    int n = sizeof(arr)/4;
    int k = 3;
    
    // solution 

    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> ans;
    for(int i = 0; i < n; i++){
        pq.push(arr[i]);
        if(pq.size()>=k){
            ans.push_back(pq.top());
            pq.pop();    
            }
    }
    while(pq.size()>0){
        ans.push_back(pq.top());
        pq.pop();
    }

    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }

}