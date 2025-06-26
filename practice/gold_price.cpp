#include<iostream>
#include<vector>
using namespace std;
int gold(vector<int>&v){

    int n = v.size();

    int buy = v[0];
    int max_profit = 0;

    for(int i = 1; i < v.size(); i++){

        if(buy > v[i]){

            buy = v[i];
        }
        else{
            int profit = v[i] - buy;
            
            max_profit = max(profit, max_profit);
        }
    }

    return max_profit;
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
    cout<<gold(v);
}