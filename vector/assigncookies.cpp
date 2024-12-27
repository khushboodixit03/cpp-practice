#include<bits/stdc++.h>
using namespace std;

int findcontentchildren(vector<int> &g, vector<int> &s) {
    int n = g.size();
    int m = s.size(); 

    sort(g.begin(), g.end());
    sort(s.begin(), s.end()); 

    int i = 0; 
    int j = 0; 
    int count = 0;

    while(i < n && j < m) {
        if(s[j] >= g[i]) {
            count++;
            i++;
            j++;
        } else {
            j++;
        }
    }
    
    return count;
}

int main() {
    int n, m;
    
    cout << "Enter the size of vector 1: ";
    cin >> n;
    vector<int> g(n); 
    for(int i = 0; i < n; i++) {
        cin >> g[i];
    }

    cout << "Enter the size of vector 2: ";
    cin >> m;
    vector<int> s(m); 
    for(int i = 0; i < m; i++) {
        cin >> s[i];
    }

    cout << "Number of content children: " << findcontentchildren(g, s) << endl;
    
    return 0;
}
