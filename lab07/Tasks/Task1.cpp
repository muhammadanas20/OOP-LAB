#include <iostream>
using namespace std;
#define PI 3.142
class Shape{
  public:
  void area(int side){
    cout << "Area of square is: " << side * side << endl;
  }
  void area(int length,int width){
    cout << "Area of rectangle is: " << length * width << endl;
  }
  void area(double radius){
    cout << "Area of circle is: " << PI * radius * radius << endl;
  }
};
int main(){
  Shape shape;

  int side, length, width;
  double radius;

  cout << "Enter side of square: ";
  cin >> side;
  shape.area(side);

  cout << "Enter length and width of rectangle: ";
  cin >> length >> width;
  shape.area(length, width);

  cout << "Enter radius of circle: ";
  cin >> radius;
  shape.area(radius);

  return 0;
}