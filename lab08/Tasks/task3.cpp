#include <iostream>
using namespace std;
class Person{
	protected:
		string name;
	public:
		void showperson(){
			cout << "Person Name:" << name << endl;
		}
};
class Student: virtual public Person{
	protected:
		float GPA;
	public:
		void showStudent(){
			cout << "student GPA:" << GPA << endl;
		}
};
class Employee:virtual public Person{
	protected:
		int ID;
	public:
		void showEmployee(){
			cout << "Employee ID:" << ID << endl;
		}
};
class TeachingAssistent : public Employee,public Student{
	private:
		float salary;
	public:
		TeachingAssistent(string name,float gpa,int id,float salary):salary(salary){
			Person::name = name;
			Student::GPA = gpa;
			Employee::ID = id;
		}
	    void showAssistent(){
	    	Person::showperson();
	    	Student::showStudent();
	    	Employee::showEmployee();
			cout << "Salary:" << salary << endl;
		}
		
};

int main(){
	TeachingAssistent TA("Shivam",3.9,001,30000.0f);
	TA.showAssistent();	
	return 0;
}
