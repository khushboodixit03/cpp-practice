#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n; 
    cin>>n; 

    queue<int> q; 

    for(int i = 0; i < n ; i++)
    {
        int val;
        cin>>val;
        q.push(val); 
    }

    int k ; 
    cin>>k; 

    // Display
    for(int i = 0 ; i < n ; i++)
    {
        cout<<q.front()<<" "; 
        int x = q.front(); 
        q.pop(); 
        q.push(x);
    }
    cout<<endl;


    vector<int> v;

    for(int i = 0 ; i < n ; i++)
    {
        v.push_back(q.front());
        q.pop(); 
    }

    reverse(v.begin(),v.begin()+k);

    for(int i = 0 ; i < n ; i++)
    {
        q.push(v[i]); 
    }

    // Display
    for(int i = 0 ; i < n ; i++)
    {
        cout<<q.front()<<" "; 
        int x = q.front(); 
        q.pop(); 
        q.push(x);
    }

}