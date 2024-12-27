#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);

    /**/
    int i = 0;
    int j = v.size()-1;
    bool flag = true;
    while(i < j){
        if(v[i] != v[j]){
            flag = false;
            break;
        }
        i++;
        j--;
    }
    if(flag == true){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}