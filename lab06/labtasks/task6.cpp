
#include <iostream>
using namespace std;
class University{
   private:
   string name;
   public:
   University(string name){
    this->name = name;
   }
    void showUniversity(){
     cout << "University Name: " << name << endl;
    }
};
class Faculty: public University{
    private:
    string department;
    public:
    Faculty(string name, string dept):University(name),department(dept){}
    void showFaculty(){
        showUniversity();
        cout << "Department: " << department << endl;
    }
};
class Administration{
    private:
    string adminName;
    public:
    Administration(string adminName){
        this->adminName = adminName;
    }
    void showAdministration(){
        cout << "Administrator: " << adminName << endl;
    }
};
class HOD: public Faculty, public Administration{
    public:
    HOD(string uniName, string dept, string adminName):Faculty(uniName, dept),Administration(adminName){}
    void showHODDetails(){
        showFaculty();
        showAdministration();
    }
};
int main(){
    HOD hod1("FAST University", "Computer Science", "Abdul Saeed");
    hod1.showHODDetails();
    return 0;
}