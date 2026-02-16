#include <iostream>
using namespace std;

class Employee{
private:
    int employeeID;
    float salary;

public:
    Employee() {   
        employeeID = 0;
        salary = 0.0;
    }

    Employee(int ID) {
        employeeID = ID;
        salary = 0.0;
    }

    void setsalary(float salary){
        this->salary = salary;
    }

    void show() const {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {

    Employee employees[5];

    for (int i = 0; i < 5; i++) {
        employees[i] = Employee(i + 1); 
        employees[i].setsalary(1000 * (i + 1));
    }

    for (int i = 0; i < 5; i++) {
        cout << "---Employee "<< i+1 << " information----\n" ;
        employees[i].show();
    }

    return 0;
}
