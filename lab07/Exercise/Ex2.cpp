// Create the following classes:

// Base Class: Shape

// Derived Classes: Circle, Rectangle

// Each class should have a function: draw()

// Override the function in each derived class.
#include <iostream>
using namespace std;
class Shape{
    public:
   void draw(){
    cout << "Drawing.." << endl;
   }
};
class Circle: public Shape{
    public:
     void draw(){
    cout << "Circle" << endl;
   }
};
class Rectangle : public Shape{
    public:
     void draw(){
    cout << "Rectangle" << endl;
   }
};
int main(){
    Shape s1;
    Circle c1;
    Rectangle r1;
    s1.draw();
    c1.draw();
    r1.draw();
   return 0;
}