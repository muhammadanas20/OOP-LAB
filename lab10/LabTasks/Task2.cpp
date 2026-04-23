#include <iostream>
using namespace std;
// Design a generic array class that:

// Stores elements of any type
// Displays all elements
// Finds maximum value
template <typename T>
class Array{
    private:
    T* array;
    int size;
    public:
    Array(T* array, int size) : array(array), size(size) {}

    void display(){
        cout << "Elements of array: ";
        for(int i = 0; i < size; i++){
            cout << array[i] << " ";
        }
        cout << endl << "-----------" << endl;
    }
    
    T maximum(){
        T temp = array[0];
        for(int i = 1; i < size; i++){
            if(temp < array[i]){
                temp = array[i];
            }
        }
        return temp;
    }
};

int main(){
    cout << "----Integer Array-----" << endl;
    int intArray[] = {15, 42, 8, 99, 5};
    Array<int> a(intArray, 5);
    a.display();
    cout << "Maximum value: " << a.maximum() << endl;
    
    cout << "\n----Float Array-----" << endl;
    float floatArray[] = {3.5f, 7.2f, 1.1f, 9.8f, 4.3f};
    Array<float> b(floatArray, 5);
    b.display();
    cout << "Maximum value: " << b.maximum() << endl;
    
    return 0;
}