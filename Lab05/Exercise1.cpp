
#include <iostream>
using namespace std;
class Car{
    private:
    static int totalcar;
    public:
    Car(){
        totalcar++;
    }
    int getvalue(){
        return totalcar;
    }
    
};
int Car::totalcar;
int main() {
    Car c1;
    Car c2;
    cout << "total:" << c1.getvalue() << endl;
    return 0;
}
