#include <iostream>
#include <string>
using namespace std;
class Teacher
{
public:
    string Name;
    string Subject;
    void display() const
    {
        cout << "\n=======Teacher information======\n";
        cout << "Name :" << Name << endl;
        cout << "Subject :" << Subject << endl;
    }
};
int main()
{
    Teacher t1;
    Teacher t2;
    t1.Name = "Anas";
    t1.Subject = "OOP";
    t2.Name = "Abdullah";
    t2.Subject = "DLD";
    t1.display();
    t2.display();
    return 0;
}