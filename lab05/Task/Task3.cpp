#include <iostream>
using namespace std;
class Vehicle{
    public:
    const int vehicleID;
    string modelName;   
    Vehicle(string name,int vehicleID):vehicleID(vehicleID){
     this->modelName = name;
    }
};
int main(){
    Vehicle v1("Civic",2244);
    cout << "Vehicle ID:" << v1.vehicleID << endl;
    cout << "Vehicle Name:" << v1.modelName << endl;

    return 0;
}