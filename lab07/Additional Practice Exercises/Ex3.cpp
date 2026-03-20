#include <iostream>
using namespace std;
class Shape{
    public:
    virtual void area(){
        cout << "defualt area\n"; 
    }
};
class Circle:public Shape{
    private:
    int radius;
    public:
    Circle(int r):radius(r){}
    void area() override{
        cout << "circle area " << 3.142*radius*radius<< endl;
    }
};
class Rectangle:public Shape{
    private:
    int x;
    int y;
    public:
    Rectangle(int x,int y):x(x),y(y){}
    void area() override{
        cout << "Rectangle area " << x*y << endl;
    }
};


int main(){
    Shape *s;
    Circle c(5);
    s=&c;
    s->area();
    Rectangle r(2,3);
    s = &r;
    s->area();
    return 0;
}