#include<iostream>
#include<vector>
using namespace std;
int best_time(vector<int>&v){

    int n = v.size();

    int buy_price = v[0];
    int max_profit = 0;

    for(int i = 1; i < n; i++){

        if(buy_price > v[i]) buy_price = v[i];

        else{

            int profit = 0;

            profit = v[i] - buy_price;

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
    cout<<best_time(v);
}