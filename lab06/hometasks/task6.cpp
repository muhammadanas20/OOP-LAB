
#include <iostream>
using namespace std;
class Device{
    private:
    string model;
    public:
    Device(string model):model(model){}
    void ShowModel(){
        cout << "Model" << model << endl;
    }
};
class Computer: public Device{
    private:
    string processor;
    public:
    Computer(string model,string proc):Device(model),processor(proc){}
    void ShowComputerDetails(){
        ShowModel();
        cout << "Processor:" << processor << endl;
    }
};
class Network{
    private:
    string networkType;
    public:
    Network(string type):networkType(type){}
    void ShowNetwork(){
        cout << "Network Type:" << networkType << endl;
    }
};
class Server: public Computer, public Network{
    public:
    Server(string model,string proc,string netType):Computer(model,proc),Network(netType){}
    void ShowServerDetails(){
        ShowComputerDetails();
        ShowNetwork();
    }
};
int main(){
    Server s1("Dell PowerEdge","Intel Xeon","Ethernet");
    s1.ShowServerDetails();
    return 0;
}
