
#include <iostream>
using namespace std;

class CPU{
    private:
    int ram;
    float clockspeed;
    public:
    CPU(int ram,float speed):ram(ram),clockspeed(speed){}
    float getspeed() const {
        return clockspeed;
    }
     float getram() const {
        return ram;
    }
};
class Computer{
    private:
    string name;
    CPU cpu;
    public:
    Computer(string name,int ram,float speed):cpu(ram,speed){
      this->name = name;
    }
    void display() const{
        cout << "\n----computer information-----\n";
        cout << "Name: " << name << endl ;
        cout << "Ram: " << cpu.getram() << " GB" << endl;
        cout << "Clockspeed: " << cpu.getspeed() << " GZ" << endl;
    }
};

int main() {
    Computer c1("windows",8,2.4);
    c1.display();
     return 0;
}
