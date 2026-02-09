#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter age: ";
    cin >> age;
    cin.ignore();  

    cout << "Enter full name: ";
    getline(cin, name);

    cout << "\nStudent Information" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    return 0;
}
