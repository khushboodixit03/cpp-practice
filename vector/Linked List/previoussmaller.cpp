#include<bits/stdc++.h>
using namespace std;
void nextgreater(vector<int> &v){
    int n = v.size();
    vector<int> ans(n);
    stack<int> st;
    ans[0] = -1;
    st.push(v[0]);
     for(int i = 0; i < n; i++){
        while(st.size()!=0 && st.top()>=v[i]) st.pop(); // pop

        if(st.size()==0) ans[i] = -1;

        else ans[i] = st.top(); // top

        st.push(v[i]); // push

     }

     for(int i = 0; i < n; i++){
        cout<<ans[i]<<" ";
     }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
       cin>>v[i];
    }
    nextgreater(v);
}