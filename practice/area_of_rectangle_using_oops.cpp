#include<iostream>
using namespace std;
class Rectangle{
    private:

    int length;
    int breadth;

    public:

    Rectangle(){

        int length = 10;
        int breadth = 20;

    }

    void area(){

    int a = length*breadth;

     cout<<a;
}

void parameter(){

    int p = 2 * (length + breadth);

    cout<<p;
}
};

int main(){

Rectangle l;

l.area();
l.parameter();


}