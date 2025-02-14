#include<iostream>
#include<queue>
using namespace std; 
int main()
{
    int arr[] = {2,1,4,5,61,9,0,-2,8,9}; 
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 3;

    priority_queue<int> pq;
    for(int i = 0; i < n; i++){
        pq.push(arr[i]);
    }
    while(k > 1){
        pq.pop();
        k--;
    }
    cout<<pq.top();

}