#include <iostream>
using namespace std;
class Patient
{
private:
      const int patientID;
    string name;

public:
    Patient() : patientID(0), name("") {}
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
    Patient **patients;
    static int totalPatients;

public:
    int currentCount = 0;
    Hospital(string name, int capacity)
    {
        this->name = name;
        this->capacity = capacity;
        patients = new Patient*[capacity];
    }
    void addPatient(string pName, int id)
    {
        if (currentCount < capacity)
        {
            patients[currentCount++] = new Patient(pName, id);
            totalPatients++;
        }
        else
        {
            cout << "Hospital is at full capacity!" << endl;
        }
    }
    void displayAllPatients() const
    {
        cout << "\n--- Patient Records for " << name << " ---" << endl;
        for (int i = 0; i < currentCount; i++)
        {
            patients[i]->showDetail();
        }
    }
    static int getTotalPatients()
    {
        return totalPatients;
    }
    ~Hospital()
    {
        for (int i = 0; i < currentCount; i++) {
            delete patients[i];
        }
        delete[] patients;
    }
};
int Hospital::totalPatients = 0;
int main()
{
    Hospital myHospital("Shifa", 10);

    //  Add 3 patients
    myHospital.addPatient("Anas", 101);
    myHospital.addPatient("Abdullah", 102);
    myHospital.addPatient("Alyan", 103);

 
    myHospital.displayAllPatients();

    cout << "\nTotal Patients across all records: " << Hospital::getTotalPatients() << endl;

    return 0;
}