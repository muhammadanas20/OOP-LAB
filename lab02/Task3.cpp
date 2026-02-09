#include <iostream>
#include <cmath>
using namespace std;
void Square(int *value){
   *value = (*value)*(*value) ;
}
int main(){
    int value = 15;
    int *ptr = &value;
    Square(ptr);
    cout << "Square of value: " << value << endl;
    return 0;
}