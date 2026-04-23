// Create a student grading system:

// Input marks
// Throw exception if:

// marks < 0
// marks > 100
// Display appropriate message
#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int *marks;
    int NoOfSub;

public:
    Student(string name, int no)
    {
        this->name = name;
        NoOfSub = no;
        marks = new int[no];
    }
    void UploadingGrade()
    {
        int buffer;
        for (int i = 0; i < NoOfSub; i++)
        {
            try
            {
                cout << "Enter a marks of " << i + 1 << " Subject:";
                cin >> buffer;
                if(buffer < 0){
                    throw "Error: Marks Cannot be negative!!";
                }else if( buffer > 100){
                    throw "Error: Marks Cannot be exceed 100!!";
                }

                 marks[i] = buffer;
            }
            catch(const char* msg){
                i--;
                cout << msg << endl;
            }
        }
    }
    void Display() {
        cout << "Name:" << name << endl;
        cout << "No of Course:" << NoOfSub << endl;
        cout << "Marks Details" << endl;
        for(int i=0;i<NoOfSub;i++){
            cout << "Subject " << i+1 << ":" << marks[i] << endl;
        }
    }
    ~Student(){
        delete [] marks;
    }
};

int main()
{
    Student s1("Anas",3);
    s1.UploadingGrade();
    s1.Display();
    return 0;
}