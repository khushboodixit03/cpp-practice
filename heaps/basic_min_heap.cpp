#include<iostream>
#include<queue>
using namespace std; 
int main()
{
    int arr[] = {2,3,6,1,9}; 
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 3;


    priority_queue<int, vector<int>, greater<int>> pq;

   for(int i = 0; i < n; i++){
    pq.push(arr[i]);
   }
   while(k>1){
    pq.pop();
    k--;
   }

   cout<<pq.top();
    

}