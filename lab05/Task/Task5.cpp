#include <iostream>
using namespace std;
class SIM
{
private:
    string network;

public:
    SIM(string network)
    {
        this->network = network;
    }
    void showCarier() const
    {
        cout << "Network operator: " << network << endl;
    }
};
class Mobile
{
private:
    string modelname;
    SIM sims;

public:
    Mobile(string name, string sim) : modelname(name), sims(sim)
    {
    }
    void display() const
    {
        cout << "Model Name:" << modelname << endl;
        sims.showCarier();
    }
};
int main()
{
    Mobile m1("Lenovo", "JAZZ");
    Mobile m2("Samsung", "JAZZ");
    m1.display();
    m2.display();
    return 0;
}