#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5,7);
    cout<<v[2]<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity();
}