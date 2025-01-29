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

void rectangle()
{
    cout<<"Parth loves Khushboo"; 
}

void rectangle(double salary)
{
    cout<<"Parth loves Khushboo and his salary is "<<salary;
}

};

int main(){
  
Teacher t1("Khushboo",25000,"Computer Science","34");

t1.rectangle(25000);

}