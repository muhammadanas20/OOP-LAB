#include <iostream>
using namespace std;
// . Create a Patient class with constant patientID and name.

// 2. Create a Hospital class that:

// o Contains an array of Patient objects
// o Uses a static variable to count total patients

// 3. Add functions to add a new patient and display all patient details.

// 4. Create 3 patients in main() and display the total number of patients.
class Patient
{
private:
    const int patientID;
    string name;

public:
    Patient():patientID(0),name(""){}
    Patient(string name, int ID) : patientID(ID), name(name) {}
    void showDetail() const
    {
        cout << "ID:" << patientID << endl;
        cout << "Name:" << name << endl;
    }

};
class Hospital
{
private:
    string name;
    int capacity;
    Patient *patients;
    static int totalPatients;

public:
    int currentCount = 0;
    Hospital(string name, int capacity)
    {
        this->name = name;
        this->capacity = capacity;
        patients = new Patient[capacity];
    }
    void addPatient(string pName, int id) {
        if (currentCount < capacity) {
            patients[currentCount++] = Patient(pName, id);
            totalPatients++; 
        } else {
            cout << "Hospital is at full capacity!" << endl;
        }
    }
    void displayAllPatients() const {
        cout << "\n--- Patient Records for " << name << " ---" << endl;
        for (int i = 0; i < currentCount; i++) {
            patients[i].showDetail();
        }
    }
    static int getTotalPatients() {
        return totalPatients;
    }
    ~Hospital()
    {
        delete[] patients;
    }
};
int Hospital::totalPatients = 0;
int main()
{
}