#include <iostream>
using namespace std;
class Employee{
    private:
    int ID;
    double salary;
    public:
    Employee(double salary,int Id ):salary(salary),ID(Id){}
    double getSalary(){
        return salary;
    }
    void showEmployee(){
        cout << "ID:" << ID << endl;
        cout << "Salary:" << salary << endl;
    }
};
class Manager: public Employee{
    private:
    double bonus;
    public:
    Manager(int id,double salary,double bonus):Employee(salary,id),bonus(bonus){}
    void showManager(){
        showEmployee();
        cout << "Bonus:" << bonus << endl;
        cout << "Complete Salary:" << getSalary() + bonus << endl;
    }
};
int main(){
    Manager m1(101, 75000, 12000);
    m1.showManager();
    return 0;
}