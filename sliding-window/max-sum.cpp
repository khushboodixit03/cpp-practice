// let the array of 10 size and subarray size of 3

#include<iostream>
#include<vector>
using namespace std; 
int main()
{   
    int n; 
    cin>>n; 

    vector <int> arr; 

    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i]; 
    }

    // Subarray value 

    int k; 
    cin>>k;

    // Finding the first sum 

    int maxsum = 0;

    int sum = 0;
    for(int i = 0 ; i < k ; i++)
    {
        sum+= arr[i];
    }

    if(maxsum<sum) maxsum = sum;

    // Sliding Window

    int i = 1;
    int j = k; 

    while(j<n){
        sum = sum - arr[i] + arr[j]; 

        if(maxsum<sum) maxsum = sum;

        i++;
        j++; 
    }     

    cout<<maxsum;



}