#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:
string name;
void displayname(){
    cout<<name;
}
};

class Student : public Teacher{
    public:
    void displayname(){
    cout<<"this is my name";
    }
};

int main(){
  Student s1;
 
  s1.name = "Geeta";
  s1.displayname();
}
