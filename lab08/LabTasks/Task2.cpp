// 2. Friend Classes
// Objective: Understand how a class can access private data of another class through friendship.

// Tasks:
// Create classes CarEngine and Mechanic.
// Make Mechanic a friend class of CarEngine.
// Implement functions in Mechanic to:
// Display engine horsepower
// Upgrade engine horsepower
// Add validation: upgraded horsepower must be between 100 and 1000.
// (Optional) Add a Car class that contains CarEngine objects and show how Mechanic can access engines through Car.
#include <iostream>
#include <string>
using namespace std;
class Mechanic;
class CarEngine{
    private:
        int horsePower;
    public:
        CarEngine(int power = 0):horsePower(power){}
        friend class Mechanic;
};
class Mechanic{
    public:
        void display(CarEngine &car) const {
            cout << "Engine Horse power is: " << car.horsePower << " HP" << endl;
        }
        void Upgradepower(CarEngine &car, int amount){
            int upgraded = car.horsePower + amount;
            if(upgraded >= 100 && upgraded <= 1000){
                car.horsePower += amount;
                cout << "Engine upgraded! New horse power: " << car.horsePower << " HP" << endl;
            }
            else{
                cout << "Upgrade failed! Horsepower must be between 100-1000 HP." << endl;
                cout << "Attempted value: " << upgraded << " HP" << endl;
            }
        }
};
class Car{
    private:
        CarEngine engine;
        string name;
    public:
        Car(int power, string name):engine(power), name(name){}
        void displayCar(){
            cout << "Car Name: " << name << endl;
        }
        CarEngine& getEngine(){
            return engine;
        }
};
int main(){
    cout << "===== Mechanic Friend Class Demo =====\n" << endl;
    
   
    CarEngine engine1(150);
    Mechanic mechanic;
    
    cout << "--- Engine 1 ---" << endl;
    mechanic.display(engine1);
    
    cout << "\nAttempting to upgrade by 200 HP:" << endl;
    mechanic.Upgradepower(engine1, 200);
    
    cout << "\nCurrent status:" << endl;
    mechanic.display(engine1);
    
    cout << "\nAttempting to upgrade by 900 HP:" << endl;
    mechanic.Upgradepower(engine1, 900);
    
    cout << "\nAttempting to downgrade by 100 HP:" << endl;
    mechanic.Upgradepower(engine1, -100);
    
    cout << "\n--- Using Car Class ---" << endl;
    Car myCar(200, "Tesla Model S");
    myCar.displayCar();
    
    cout << "\nEngine details:" << endl;
    mechanic.display(myCar.getEngine());
    
    cout << "\nUpgrading car engine:" << endl;
    mechanic.Upgradepower(myCar.getEngine(), 300);
    
    cout << "\nFinal engine status:" << endl;
    mechanic.display(myCar.getEngine());
    
    return 0;
}