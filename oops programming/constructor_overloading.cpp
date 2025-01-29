#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int length, int breadth){
        this->length = 5;
        this->breadth = breadth;
    }
    void rect(int length, int breadth){
        int r = length*breadth;
        cout<<r;
    }
};
int main(){
    Rectangle r(5,4);
    r.rect(5,4);
}