#include <iostream>
using namespace std;
class Employee {
public:
    virtual void calculateSalary() {
        cout << "Employee salary: 10000" << endl;
    }

    virtual ~Employee() {}
};

class Manager : public Employee {
public:
    void calculateSalary() override {
        cout << "Manager salary: 20000" << endl;
    }
};

class Developer : public Employee {
public:
    void calculateSalary() override {
        cout << "Developer salary: 15000" << endl;
    }
};

class Intern : public Employee {
public:
    void calculateSalary() override {
        cout << "Intern salary: 5000" << endl;
    }
};

int main() {
    Employee* employees[3];

    Manager manager;
    Developer developer;
    Intern intern;

    employees[0] = &manager;
    employees[1] = &developer;
    employees[2] = &intern;

    for (int i = 0; i < 3; i++) {
        employees[i]->calculateSalary();
    }

    return 0;
}