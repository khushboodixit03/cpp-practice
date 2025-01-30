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
 class Employee : public HR{
    public:
    int experience;
 };
int main(){
    Employee e;
    e.name = "Khushboo";
    cout<<e.name;
}