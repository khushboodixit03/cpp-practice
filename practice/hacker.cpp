#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter date: ";
    cin>>n;

    int x;
    cout<<"enter month: ";
    cin>>x;

    int y;
    cout<<"enter year: ";
    cin>>y;

    if(y % 4 == 0 || y % 400 == 0 && y % 100 != 0 && x == 2){
        cout<<29;
    }
    else if(x == 2) cout<<28;
    else if(x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12){
        cout<<31;
    }
    else{
        cout<<30;
    }
}