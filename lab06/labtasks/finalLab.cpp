// Final Lab: Multiple Inheritance and Virtual Functions
//Student mangement system with multiple inheritance and virtual functions
#include <iostream>
using namespace std;
class Person {
protected:
    string name;
public:
    void setName(string n) {
        name = n;
    }
    void show() {
        cout << "Name: " << name << endl;
    }
};
class Student : virtual public Person {
private:
    int studentID;
public:
    void setStudentID(int id) {
        studentID = id;
    }
    void show() {
        Person::show();
        cout << "Student ID: " << studentID << endl;
    }
};
class Employee : virtual public Person {
private:
    int employeeID;
public:
    void setEmployeeID(int id) {
        employeeID = id;
    }
    void show() {
        Person::show();
        cout << "Employee ID: " << employeeID << endl;
    }
};
class TeachingAssistant : public Student, public Employee {
public:
    void show() {
        Student::show();
        Employee::show();
    }
};
int main() {
    TeachingAssistant ta;
    ta.setName("Anas");
    ta.setStudentID(12345);
    ta.setEmployeeID(54321);
    ta.show();
    return 0;
}