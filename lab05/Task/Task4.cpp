#include <iostream>
using namespace std;
class Square{
    private:
    double lenght;
    double width;
    public:
    Square(double lenght,double width):lenght(lenght),width(width){

    }
   double calculateArea()const{
        return lenght*width;
    }
};
int main(){
   Square S1(12.3,4);
   Square S2(7,2);
   cout << "AREA 1: " << S1.calculateArea() << endl;
   cout << "AREA 2: " << S2.calculateArea() << endl;
}