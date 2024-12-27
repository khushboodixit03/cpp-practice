#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.top();
    cout<<endl;
    /**/
    cout<<st.size();
    cout<<endl;
    stack<int> v;
    v.push(5);
    v.push(6);
    v.push(3);
    v.swap(st);
    cout<<v.size();
    cout<<endl;
    cout<<st.size();
    

}