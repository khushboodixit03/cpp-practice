#include<bits/stdc++.h>
using namespace std;
void match(vector<string>&s)
{
    int n = s.size();
    vector<string> ans;
    stack<string> st;
    st.push(s[0]);
    int i = 1;
    while(i < n){
        if(st.top() == s[i])
        i++;
        else st.push(s[i]);
    }
    while(st.size() != 0){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    for(int i = 0; i < n; i++){
        cout<<ans[i];
    }

} 
int main()
{
    int n; 
    cin>>n; 
    vector<string> s; 

    for(int i = 0 ; i < n ; i++)
    {
        string val; 
        cin>>val;
        s.push_back(val);
    }

    match(s);
}