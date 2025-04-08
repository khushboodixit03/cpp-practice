#include<iostream>
#include<vector>
using namespace std;
int sliding_window(vector<int>& v){
    int n = v.size();
    int k;
    cout<<"enter the size of slide window: ";
    cin>>k;
     
    int sum = 0;

    for(int i = 0; i < k; i++){
        sum = sum + v[i];
    }

    int minsum = sum;
    int start = 0;
    int end = k-1;

    while(end < n){
        sum = sum + v[end+1] - v[start];
        minsum = min(minsum, sum);
       start++;
       end++;
    }
    return minsum;

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

    cout<<sliding_window(v);
}