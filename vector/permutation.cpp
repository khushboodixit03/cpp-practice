#include<iostream>
using namespace std;
int perm(int n , int r)
{   
    // base cases
    if(n==0 || n ==1) return 1; 
    if(n==r) return 1;  

    // recursive call
    return perm(n-1,r) + perm(n-1,r-1);
}

int main()
{
    int n,r; 
    
    cout<<"Enter the value of n and r"; 
    cin>>n>>r;
    cout<<perm(n,r); 
}
