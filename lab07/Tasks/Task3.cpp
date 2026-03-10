#include <iostream>
using namespace std;

class Complex {
private:
	double real;
	double imag;

public:
	Complex(double r = 0, double i = 0) {
		real = r;
		imag = i;
	}

	Complex operator+(const Complex& other) const {
		return Complex(real + other.real, imag + other.imag);
	}

	Complex operator-(const Complex& other) const {
		return Complex(real - other.real, imag - other.imag);
	}

	Complex operator*(const Complex& other) const {
		return Complex(
			(real * other.real) - (imag * other.imag),
			(real * other.imag) + (imag * other.real)
		);
	}

	void display() const {
		cout << real;
		if (imag >= 0) {
			cout << " + " << imag << "i";
		} else {
			cout << " - " << -imag << "i";
		}
	}
};

int main() {
	Complex c1(4, 3);
	Complex c2(2, -5);

	Complex sum = c1 + c2;
	Complex diff = c1 - c2;
	Complex prod = c1 * c2;

	cout << "c1 = ";
	c1.display();
	cout << endl;

	cout << "c2 = ";
	c2.display();
	cout << endl;

	cout << "c1 + c2 = ";
	sum.display();
	cout << endl;

	cout << "c1 - c2 = ";
	diff.display();
	cout << endl;

	cout << "c1 * c2 = ";
	prod.display();
	cout << endl;

	return 0;
}