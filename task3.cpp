#include <iostream>
using namespace std;

class Student {
private:
    int id;

public:
    
    Student(int id) {
        this->id = id;  // this resolve difference between the given value and attribute 
    }

    void display() {
        cout << "Student ID: " << id << endl;
    }
};

int main() {
    Student s1(101);

    s1.display();

    return 0;
}
