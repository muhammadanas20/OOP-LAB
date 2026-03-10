// Create a class Calculator that overloads a function multiply() to perform:

// Multiplication of two integers
// Multiplication of three integers
// Multiplication of two floating values
#include <iostream>
using namespace std;
class Calculator{
    public:
    void Multiply(int a,int b){
        cout << "Multiplication:" << a*b << endl;
    }
     void Multiply(int a,int b,int c){
        cout << "Multiplication:" << a*b*c << endl;
    }
     void Multiply(float a,float b){
        cout << "Multiplication:" << a*b << endl;
    }
};
int main(){
    Calculator c;
    c.Multiply(4,5);
    c.Multiply(4,5,6);
    c.Multiply(3.2f,5.5f);
    return 0;
}