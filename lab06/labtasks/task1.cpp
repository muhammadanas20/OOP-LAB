#include <iostream>
using namespace std;
class Person{
    private:
    string name;
    int age;
    public:
    Person(string name,int age){
       this->name = name;
       this->age = age;
    }
    void displayinfo(){
        cout << "Name :" << name << endl;
        cout << "Age :" << age << endl;
    }
};
class Student: public Person{
    private:
    string rollNo;
    public:
    Student(string name, int age, string rol):Person(name, age), rollNo(rol){}
    void displayStudent(){
        displayinfo();
        cout << "Roll no :" << rollNo << endl;
    }

};
int main(){
    Student s1("Anas",18,"25k-0899");
    s1.displayStudent();
}