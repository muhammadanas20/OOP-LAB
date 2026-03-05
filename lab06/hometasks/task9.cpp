#include <iostream>
using namespace std;
class Device {
public:
    void show() {
        cout << "Device" << endl;
    }
};
class Camera : virtual public Device {};
class Phone : virtual public Device {};
class SmartPhone : public Camera, public Phone {};
int main() {
    SmartPhone obj;
    obj.show(); // No ambiguity
    cout << "Memory address of Device from Camera path: " << static_cast<Camera*>(&obj) << endl;
    cout << "Memory address of Device from Phone path: " << static_cast<Phone*>(&obj) << endl;
    return 0;
}