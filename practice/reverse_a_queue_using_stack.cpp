#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    int n; 
    cin>>n; 

    queue<int> q; 

    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin>>x;
        q.push(x); 
    }
    
    stack<int> s; 

    while(q.size()!=0)
    {
        s.push(q.front()); 
        q.pop(); 
    }

    while(s.size()!=0)
    {
        q.push(s.top());
        s.pop();
    }

}