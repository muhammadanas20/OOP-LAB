// 3. Virtual Inheritance
// Objective: Demonstrate the diamond problem and solve it using virtual inheritance.

// Tasks:
// Create a base class Person with private attributes: ID and name.
// Derive two classes from Person: Student and Employee.
// Create a class TeachingAssistant that inherits from both Student and Employee.
// Demonstrate ambiguity when accessing ID or name in TeachingAssistant.
// Resolve the ambiguity using virtual inheritance.
// Add additional attributes:
// Student → GPA
// Employee → Salary
// TeachingAssistant → both GPA and Salary

#include <iostream>
#include <string>
using namespace std;

class Person {
	private:
		int ID;
		string name;
	public:
		Person(int id = 0, string n = "Unknown") : ID(id), name(n) {}
		
		int getID() const {
			return ID;
		}
		
		string getName() const {
			return name;
		}
		
		void setPerson(int id, string n) {
			ID = id;
			name = n;
		}
		
		void showPerson() const {
			cout << "ID: " << ID << ", Name: " << name << endl;
		}
};

class Student : virtual public Person {
	protected:
		float GPA;
	public:
		Student(int id = 0, string n = "Unknown", float g = 0.0) 
			: Person(id, n), GPA(g) {}
		
		float getGPA() const {
			return GPA;
		}
		
		void setGPA(float g) {
			if(g >= 0.0 && g <= 4.0) {
				GPA = g;
			} else {
				cout << "Invalid GPA. Must be between 0.0 and 4.0" << endl;
			}
		}
		
		void showStudent() const {
			cout << "Student - ";
			showPerson();
			cout << "GPA: " << GPA << endl;
		}
};

class Employee : virtual public Person {
	protected:
		float salary;
	public:
		Employee(int id = 0, string n = "Unknown", float s = 0.0) 
			: Person(id, n), salary(s) {}
		
		float getSalary() const {
			return salary;
		}
		
		void setSalary(float s) {
			if(s >= 0) {
				salary = s;
			} else {
				cout << "Invalid salary. Must be non-negative." << endl;
			}
		}
		
		void showEmployee() const {
			cout << "Employee - ";
			showPerson();
			cout << "Salary: $" << salary << endl;
		}
};

class TeachingAssistant : public Student, public Employee {
	private:
		float bonus;
	public:
		TeachingAssistant(int id = 0, string n = "Unknown", float g = 0.0, 
						 float s = 0.0, float b = 0.0) 
			: Person(id, n), Student(id, n, g), Employee(id, n, s), bonus(b) {}
		
		float getBonus() const {
			return bonus;
		}
		
		void setBonus(float b) {
			if(b >= 0) {
				bonus = b;
			} else {
				cout << "Invalid bonus. Must be non-negative." << endl;
			}
		}
		
		void showTeachingAssistant() const {
			cout << "\n===== Teaching Assistant Profile =====" << endl;
			cout << "Person Information - ";
			showPerson();
			cout << "\nStudent Information:" << endl;
			cout << "  GPA: " << GPA << endl;
			cout << "\nEmployee Information:" << endl;
			cout << "  Salary: $" << salary << endl;
			cout << "  Bonus: $" << bonus << endl;
			cout << "  Total Compensation: $" << (salary + bonus) << endl;
			cout << "======================================\n" << endl;
		}
};

int main() {
	cout << "===== Virtual Inheritance & Diamond Problem Solution =====" << endl;
	
	cout << "\nCreating a Teaching Assistant:" << endl;
	TeachingAssistant ta(101, "Ahmed Hassan", 3.8, 50000.0, 5000.0);
	

	ta.showTeachingAssistant();
	
	
	cout << "Accessing Person data (resolved through virtual inheritance):" << endl;
	cout << "ID: " << ta.getID() << endl;
	cout << "Name: " << ta.getName() << endl;
	cout << "GPA: " << ta.getGPA() << endl;
	cout << "Salary: $" << ta.getSalary() << endl;
	cout << "Bonus: $" << ta.getBonus() << endl;
	

	cout << "\n--- Modifying Attributes ---" << endl;
	ta.setGPA(3.9);
	ta.setSalary(55000.0);
	ta.setBonus(7000.0);
	
	cout << "After modifications:" << endl;
	ta.showTeachingAssistant();
	
	cout << "\nCreating another Teaching Assistant:" << endl;
	TeachingAssistant ta2(102, "Fatima Khan", 3.5, 45000.0, 4500.0);
	ta2.showTeachingAssistant();
	
	cout << "\n===== End of Virtual Inheritance Demo =====" << endl;
	
	return 0;
}