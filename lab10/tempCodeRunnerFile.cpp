#include <iostream>
#include <limits>

using namespace std;

template <typename T>
class Calculator {
private:
	T a;
	T b;

public:
	Calculator(T first, T second) : a(first), b(second) {}

	T add() const {
		return a + b;
	}

	T subtract() const {
		return a - b;
	}

	T multiply() const {
		return a * b;
	}

	T divide() const {
		if (b == 0) {
			throw "Division by zero exception.";
		}
		return a / b;
	}
};

template <typename T>
T readNumber(const string& prompt) {
	T value;
	cout << prompt;
	cin >> value;

	if (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		throw "Invalid input. Please enter a numeric value.";
	}

	return value;
}

int main() {
	try {
		cout << "Generic Calculator System" << endl;
		cout << "Select data type:" << endl;
		cout << "1. Integer" << endl;
		cout << "2. Double" << endl;
		cout << "Enter your choice (1 or 2): ";

		int choice;
		cin >> choice;

		if (cin.fail() || (choice != 1 && choice != 2)) {
			throw "Invalid input. Choice must be 1 or 2.";
		}

		if (choice == 1) {
			int x = readNumber<int>("Enter first integer: ");
			int y = readNumber<int>("Enter second integer: ");

			Calculator<int> calc(x, y);
			cout << "Addition: " << calc.add() << endl;
			cout << "Subtraction: " << calc.subtract() << endl;
			cout << "Multiplication: " << calc.multiply() << endl;
			cout << "Division: " << calc.divide() << endl;
		} else {
			double x = readNumber<double>("Enter first number: ");
			double y = readNumber<double>("Enter second number: ");

			Calculator<double> calc(x, y);
			cout << "Addition: " << calc.add() << endl;
			cout << "Subtraction: " << calc.subtract() << endl;
			cout << "Multiplication: " << calc.multiply() << endl;
			cout << "Division: " << calc.divide() << endl;
		}
	} catch (const char* msg) {
		cout << "Error: " << msg << endl;
	}

	return 0;
}