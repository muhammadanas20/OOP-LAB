#include <iostream>
using namespace std;
// Write a program that:

// Takes user age
// Throws exception if age < 18
int main(){
  int age;
  try{
    int buffer;
    cout << "Enter Age:";
    cin >> buffer;
    if(buffer < 18){
        throw "Error: UnderAge!!";
    }
    age = buffer;
  }
  catch(const char* msg){
    cout << msg << endl;
  }
  return 0;
}