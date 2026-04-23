#include <iostream>
using namespace std;

template <typename T>

T getMin(T a,T b){
    return (a > b ? b : a);
}


int main(){
        cout << "Integer:" << getMin(10,20) << endl;
        cout << "Float:"  << getMin(3.5f,4.5f) << endl;
        cout << "Character:" << getMin('A','X') << endl;
    return 0;

}