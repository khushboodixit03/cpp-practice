#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void laundry(vector<int>&v){

    int lo = 0;
    int hi = v.size()-1;
    int mid = 0;

    while(mid <= hi){

        if(v[mid] == 0){
            
            swap(v[mid], v[lo]);
            lo++;
            mid++;
        }

        else if(v[mid] == 1){

            mid++;
        }

        else{

            swap(v[mid], v[hi]);
            hi--;
        }
    }

}

int main(){

    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    vector<int> v;

    for(int i = 0; i < n; i++){

        int x;
        cin>>x;

        v.push_back(x);
    }

    laundry(v);
    
    for(int i = 0; i < v.size(); i++){

        cout<<v[i]<<" ";
    }
}  