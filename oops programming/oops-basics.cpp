#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:
string name;
double salary;
string department;
string id;

void changedept(string newdept){
  department = newdept;
}
};

int main(){
  Teacher t1;
  Teacher t2;
  t1.name = "Geeta";
  t1.salary = 50000;
  t1.department = "Data science";
  t1.id = "xyzwuv";
  t2.name = "Babita";
  t2.salary = 60000;
  t2.department = "IT";
  t2.id = "abcdef";
  cout<<t1.name;
}