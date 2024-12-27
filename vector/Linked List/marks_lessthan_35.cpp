#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"enter no. of students: ";
    cin>>n;
    int marks[n];
    cout<<endl;
    for(int i = 0; i < n; i++){
        cout<<"enter marks of students: ";
        cin>>marks[i];
    }
    cout<<endl;
    for(int i = 0; i < n; i++){
        if(marks[i] < 35){
            cout<<i<<" ";
        }
    }
}