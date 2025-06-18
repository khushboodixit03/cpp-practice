#include<iostream>
#include<vector>
#include<queue>
using namespace std; 
class Queue{
    public:
    vector<int> v; 

void push(vector<int> &v , int val)
{
    v.push_back(val);
}

void pop(vector<int> &v)
{
    vector<int> ans; 

    for(int i = 1 ; i < v.size() ; i++)
    {
        ans.push_back(v[i]);
    }

    v = ans;
}

void peek(vector<int> &v)
{
    cout<<v[0]; 
}

void size(vector<int> &v)
{
    cout<<v.size(); 
}

bool isempty(vector<int> &v)
{
    if(v.size()==0) return true;
    else return false;
}

};
int main()
{
  Queue q;

}