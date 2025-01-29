#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:
string name;
double salary;
string department;
string id;

// Constructor

Teacher(string name , double salary , string department , string id)
{
    this->name = name;
    this->salary = salary;
    this->department = department; 
    this->id = id;
}

};

int main(){
  
Teacher t1("Khushboo",25000,"Computer Science","34");

cout<<t1.name;

}