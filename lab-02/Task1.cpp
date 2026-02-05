#include <iostream>
using namespace std;

int main() {
    int a = 15;
    int *ptr = &a;

    cout << "Value of num: " << a << endl;
    cout << "Address of num: " << &a << endl;
    cout << "Value stored in ptr: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;

    return 0;
}