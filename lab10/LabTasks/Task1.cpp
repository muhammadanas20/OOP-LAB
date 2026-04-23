#include <iostream>
using namespace std;
// LAB TASK 1
// Create a program using function templates that:
// Accepts two numbers
// Returns:

// Sum
// Difference
// Product
template <typename T>

void Calculation(T a,T b){
    cout << "Addition: " << a+b << endl;
    cout << "Difference: " << a-b << endl;
    cout << "Multiply: " << a*b << endl;
}


int main(){
    cout << "Integer" << endl;
    Calculation(10,20);
    cout << "Double" << endl;
    Calculation(4.5f,3.5f);

    return 0;
}