#include<iostream>
#include<string>
using namespace std;
class Employee{
    private:
    double salary;

    public:
    string Employee_name;
    int age;

    void set_salary(double salary ){
        this->salary = salary; 
    }
    void get_salary(){
        cout<<salary;
    }
};
int main(){
    Employee Khushboo;
    Khushboo.Employee_name = "Gullu";
    Khushboo.age = 21;
    Khushboo.set_salary(100000);
    Khushboo.get_salary();
    cout<<endl;

    Employee Pari;

    Pari.Employee_name = "parth";
    Pari.age = 65;
    Pari.set_salary(50000);
    Pari.get_salary(); 

}