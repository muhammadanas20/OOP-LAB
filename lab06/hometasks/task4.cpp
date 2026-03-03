// Create:
// Appliance
// WashingMachine
// SmartWashingMachine
// Add a smart control function
#include <iostream>
using namespace std;
class Appliance {
    private:
    string brand;
    int power;
    public:
    Appliance(string brand,int power):brand(brand),power(power){}
    void showDetails(){
        cout << "Brand:" << brand << endl;
        cout << "Power:" << power << "W" << endl;
    }
};
class WashingMachine : public Appliance {
    private:
    int capacity;
    public:
    WashingMachine(string brand,int power,int capacity):Appliance(brand,power),capacity(capacity){}
    void showWashingMachineDetails(){
        showDetails();
        cout << "Capacity:" << capacity << "kg" << endl;
    }
};
class SmartWashingMachine : public WashingMachine {
    private:
    string smartControl;
    public:
    SmartWashingMachine(string brand,int power,int capacity,string smartControl):WashingMachine(brand,power,capacity),smartControl(smartControl){}
    void showSmartWashingMachineDetails(){
        showWashingMachineDetails();
        cout << "Smart Control:" << smartControl << endl;
    }
};
int main(){
    SmartWashingMachine swm1("LG",2000,7,"Wi-Fi");
    swm1.showSmartWashingMachineDetails();
    return 0;
}