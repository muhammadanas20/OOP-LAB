// 4.6 Class Tasks
// Create base class Person.
// Derive Student and Employee.
// Create TeachingAssistant inheriting both.
// Demonstrate ambiguity and resolve using virtual inheritance.
// Add attributes like ID, name, salary, GPA.
#include <iostream>
#include <string>
using namespace std;
class Person{
	protected:
		string name;
	public:
		Person(string name = "Unknown"):name(name){}
		void showperson(){
			cout << "Person Name: " << name << endl;
		}
};
class Student: virtual public Person{
	protected:
		float GPA;
	public:
		Student(string name = "Unknown", float gpa = 0):Person(name),GPA(gpa){}
		void showStudent(){
			cout << "Student GPA: " << GPA << endl;
		}
};
class Employee:virtual public Person{
	protected:
		int ID;
	public:
		Employee(string name = "Unknown", int id = 0):Person(name),ID(id){}
		void showEmployee(){
			cout << "Employee ID: " << ID << endl;
		}
};
class TeachingAssistant : public Employee, public Student{
	private:
		float salary;
	public:
		TeachingAssistant(string name, float gpa, int id, float salary)
			: Person(name), Employee(name, id), Student(name, gpa), salary(salary){}
	    void showAssistant(){
	    	Person::showperson();
	    	Student::showStudent();
	    	Employee::showEmployee();
			cout << "Salary: " << salary << endl;
		}
};

int main(){
	TeachingAssistant TA("Shivam", 3.9, 1, 30000.0f);
	TA.showAssistant();	
	return 0;
}
