#include<iostream>
using namespace std;

template <typename T>
T sum (T a, T b) {
    return (a+b);
}

template <typename T>
T difference (T a, T b) {
    return (a-b);
}

template <typename T>
T product (T a, T b) {
    return (a*b);
}

int main () {
    cout << "Adding two integers: " << sum(4, 5) << endl;
    cout << "Taking difference of two integers: " << difference(4, 5) << endl;
    cout << "Multiplying two integers: " << product(4, 5) << endl;

    cout << "Adding two floats: " << sum (5.2, 2.5) << endl;
    cout << "Taking difference of two floats: " << difference(5.2, 2.5) << endl;
    cout << "Multiplying two floats: " << product(5.2, 2.5) << endl;
}