#include <iostream>
using namespace std;

int main() {
    int *x = new int;
    cout << "Enter value:";
    cin >> *x;
    cout << "Value: " << *x << endl;

    delete x;
    x = nullptr;

    return 0;
}