#include <iostream>
using namespace std;
class Car{
    public:
    string brand;
    string model;
    void display() const {
        cout << "\n=====Car information=====\n";
        cout << "Brand :" << brand << endl;
        cout << "Model :" << model << endl;
    }
};
int main(){
    Car c1;
    c1.brand = "Honda" ;
    c1.model = "City" ;
    c1.display();
    return 0;
}