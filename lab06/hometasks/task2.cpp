#include <iostream>
using namespace std;
class Shape{
    protected:
    double radius;
    public:
    Shape(double r):radius(r){}
};
class Circle: public Shape{
    public:
    Circle(double r):Shape(r){}
    double area(){
        return 3.14 * radius * radius;
    }
};
int main(){
    Circle c1(5.0);
    cout << "Area of Circle: " << c1.area() << endl;
    return 0;
}