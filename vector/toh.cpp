#include<iostream>
using namespace std;
void tower(int n, string a, string b, string c){
    if(n == 0) return;
    tower(n-1, a, c, b);
    cout<<a<<"->"<<c;
    tower(n-1, b, a, c);
    cout<<endl;
    
    
}
int main(){
    int n ;
    cin>>n;
    tower(n, "a","b","c");
}