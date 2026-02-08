#include <iostream>
using namespace std;
class Student
{
private:
    float CGPA;

public:
    void SetGpa(float CGPA)
    {
        if (CGPA >= 0 && CGPA <= 4)
        {
            this->CGPA = CGPA;
        }
        else
        {
            cout << "Invalid CGPA\n";
        }
    }
    void display() const
    {
        cout << "CGPA:" << CGPA << endl;
    }
};
int main()
{
    Student s1;
    s1.SetGpa(4);   // valid gpa
    s1.SetGpa(4.5);  // invalid
    s1.SetGpa(-3);  //invalid
    s1.display();
    return 0;
}