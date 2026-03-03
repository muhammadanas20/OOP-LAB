#include <iostream>
using namespace std;
class Vehicle{
    private:
    string brand;
    int speed;
    public:
    Vehicle(string brand,int speed):brand(brand),speed(speed){}
    void showDetail(){
        cout << "Brand:" << brand << endl;
        cout << "speed:" << speed << endl;
    }
};
class Car : public Vehicle{
    private:
    string fuelType;
    public:
    Car(string fuel,string brand,int speed):fuelType(fuel),Vehicle(brand,speed){}
    void showCardetails(){
        showDetail();
        cout << "Fuel Type:" << fuelType << endl;
    }
};
int main(){
    Car c1("Patrol","toyota",25);
    c1.showCardetails();
}