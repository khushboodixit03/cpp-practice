#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void second_largest(vector<int> &v){
    int n = v.size();
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        if(v[i] > maxi) maxi = v[i];
    }
    int s_max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(v[i] > s_max && v[i] != maxi) s_max = v[i];
    }
    cout<<s_max;

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
      second_largest(v);
}