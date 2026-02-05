#include <iostream>
using namespace std;

int main() {
    int a = 15;        
    int* p = &a;      

    cout << "Before modification:" << endl;
    cout << "a = " << a << endl;

    
    *p = 20;          

    cout << "\nAfter modification:" << endl;
    cout << "a = " << a << endl;

    return 0;
}
