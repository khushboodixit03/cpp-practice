#include<iostream>
using namespace std;
void print1ton(int n , int i)
{
    if(i>n) return;

    print1ton(n,i+1);
    cout<<i<<endl;
}

int main()
{
    int n = 5;
    int i = 1; 
    print1ton(n,i);    
}