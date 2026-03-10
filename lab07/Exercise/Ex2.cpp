// Create the following classes:

// Base Class: Shape

// Derived Classes: Circle, Rectangle

// Each class should have a function: draw()

// Override the function in each derived class.
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape" << endl;
    }

    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    Circle c1;
    Rectangle r1;

    // Base-class pointers call the overridden functions at runtime.
    Shape* shapes[2] = {&c1, &r1};

    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();
    }

    return 0;
}