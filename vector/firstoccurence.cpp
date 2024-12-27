#include<iostream>
#include<vector>
using namespace std;
int firstoccurence(vector<int> &v , int target)
{
    int n = v.size();
    for(int i = 0; i < n; i++){
        if(v[i] == target){
            return i;
            break;
        }
    }
    return -1;
}
int main()
{
    vector <int> v; 
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    v.push_back(7);
    v.push_back(7);
    v.push_back(8); 

    int target = 7; 

    cout<<firstoccurence(v,target);
}