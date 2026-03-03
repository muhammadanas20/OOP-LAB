
#include <iostream>
using namespace std;
class Person{
    private:
    string name;
    int age;
    public:
    Person(string name,int age){
       this->name = name;
       this->age = age;
    }
    void displayinfo(){
        cout << "Name :" << name << endl;
        cout << "Age :" << age << endl;
    }
};
class Employee: public Person{
    private:
    double salary;
    public:
    Employee(string name,int age,double salary):Person(name,age),salary(salary){}
    void displayEmployee(){
        displayinfo();
        cout << "Salary :" << salary << endl;
    }
};
class Developer: public Employee{
    private:
    string programmingLanguage;
    public:
    Developer(string name,int age,double salary,string lang):Employee(name,age,salary),programmingLanguage(lang){}
    void displayDeveloper(){
        displayEmployee();
        cout << "Programming Language :" << programmingLanguage << endl;
    }
};
int main(){
    Developer d1("Anas",18,75000,"C++");
    d1.displayDeveloper();
    return 0;
}