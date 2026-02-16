
#include <iostream>
using namespace std;
#define PI 3.142
class Circle{
    private:
    float radius;
    public:
    Circle(float r){
        radius = r;
    }
    float calcarea() const {
        return PI*radius*radius;
    }
};

int main() {
    Circle c1(5.3);
    cout << "Area: " << c1.calcarea() << " unit square "<< endl;
     return 0;
}
