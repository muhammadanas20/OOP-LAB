#include <iostream>
using namespace std;

class Vehicle {
public:
	virtual void startEngine() {
		cout << "Vehicle engine started." << endl;
	}

	virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
	void startEngine() override {
		cout << "Car engine started with key ignition." << endl;
	}
};

class Bike : public Vehicle {
public:
	void startEngine() override {
		cout << "Bike engine started with self-start button." << endl;
	}
};

class Truck : public Vehicle {
public:
	void startEngine() override {
		cout << "Truck engine started with heavy-duty ignition." << endl;
	}
};

int main() {
	Car car;
	Bike bike;
	Truck truck;

	Vehicle* vehicles[3] = {&car, &bike, &truck};

	for (int i = 0; i < 3; i++) {
		vehicles[i]->startEngine();
	}

	return 0;
}