#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(23);
    pq.push(25);
    pq.push(30);
    cout<<pq.size();
    
    while(pq.size() > 0){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    cout<<pq.size();
}