#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout<<"enter array elements: ";
        cin>>arr[i];
    }
    stack <int> st;
    for(int i = 0; i < n; i++){
        st.push(arr[i]);
    }
    while(st.size() != 0){
        cout<<st.top();
        st.pop();
    }
    stack <int> v;
    while(!st.empty()){
        v.push(st.top());
        st.pop();
    } 
    while(!v.empty()){
        cout<<v.top();
        v.pop();
}
}