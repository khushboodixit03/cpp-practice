#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> next_greater(vector<int>& v){
    int n = v.size();

    stack<int> st;
    vector<int> ans(n,-1);
    st.push(v[n-1]);
    for(int i = n-2; i >= 0; i--){
        while(st.size() != 0 && st.top() < v[i]){
            st.pop();
        }

        if(st.size() != 0){
            ans[i] = st.top();
        }
        st.push(v[i]);
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;

    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> ans = next_greater(v);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}