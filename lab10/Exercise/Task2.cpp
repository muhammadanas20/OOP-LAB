#include <iostream>
using namespace std;
// Create a class template Calculator that performs:

// Addition
// Subtraction
// Multiplication
// Division
template<typename T>
class Calculator{
private:
    T a;
    T b;
public:
    Calculator(T a, T b) : a(a), b(b) {}
    
    T Sum(){
        return a + b;
    }
    
    T Division(){
        if(b != 0){
            return a / b;
        }
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    
    T Difference(){
        return a - b;
    }
    
    T Multiply(){
        return a * b;
    }
};

int main(){
    cout << "=== Integer Calculator ===" << endl;
    Calculator<int> calc1(20, 5);
    cout << "Sum: " << calc1.Sum() << endl;
    cout << "Difference: " << calc1.Difference() << endl;
    cout << "Multiply: " << calc1.Multiply() << endl;
    cout << "Division: " << calc1.Division() << endl;
    
    cout << "\n=== Float Calculator ===" << endl;
    Calculator<float> calc2(10.5f, 2.5f);
    cout << "Sum: " << calc2.Sum() << endl;
    cout << "Difference: " << calc2.Difference() << endl;
    cout << "Multiply: " << calc2.Multiply() << endl;
    cout << "Division: " << calc2.Division() << endl;
     
    return 0;
}