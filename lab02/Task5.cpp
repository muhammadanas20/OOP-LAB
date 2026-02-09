#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a size of dynamic array:";
    cin >> n;
    int *array = new int[n];
    cout << "Enter array elements:";
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    int max = array[0];
    int min = array[0];
    for(int i=0;i<n;i++){
        if(array[i] > max){
            max = array[i];
        }
        if(array[i] < min){
            min = array[i];
        }
    }
    cout << "Maximum:" << max << endl;
    cout << "Minimum:" << min << endl;
    delete[] array;
    array = nullptr;
    return 0;
}