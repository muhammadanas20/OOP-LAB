
#include <iostream>
using namespace std;
class Driver {
public:
    void drive() {
        cout << "Driver is driving..." << endl;
    }
};
class Mechanic {
public:
    void repair() {
        cout << "Mechanic is repairing..." << endl;
    }
};
class Technician : public Driver, public Mechanic {
public:
    void showDetails() {
        cout << "Technician Details:" << endl;
        drive();
        repair();
    }
};
int main() {
    Technician t1;
    t1.showDetails();
    return 0;
}