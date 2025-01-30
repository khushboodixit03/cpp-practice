#include<iostream>
#include<string>
using namespace std;
class Manager{
    public:
    string name;
    int age;
};
 class HR : public Manager{
    public:
    double salary;
 };
 class Employee : public Manager{
    public:
    int experience;
 };
int main(){
    Employee e;
    e.name = "Khushboo";
    e.age = 20;
   cout<<e.age;

}