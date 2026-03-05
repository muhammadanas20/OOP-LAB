#include <iostream>
using namespace std;
class Person {
public:
    void show() {
        cout << "Person" << endl;
    }
};
class Student : virtual public Person {};
class Employee : virtual public Person {};
class TeachingAssistant : public Student, public Employee {};
int main() {
    TeachingAssistant obj;
    obj.show(); // No ambiguity
    cout << "Memory address of Person from Student path: " << static_cast<Student*>(&obj) << endl;
    cout << "Memory address of Person from Employee path: " << static_cast<Employee*>(&obj) << endl;
    return 0;
}
