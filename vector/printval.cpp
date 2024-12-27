#include<iostream>
using namespace std;
void print1ton(int n , int i)
{
    if(i>n) return;

    cout<<i<<endl;
    
    print1ton(n,i+1);
    
}

int main()
{
    int n = 5;
    int i = 1; 
    print1ton(n,i);    
}