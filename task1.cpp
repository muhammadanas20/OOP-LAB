#include <iostream>
using namespace std;
class Employee{
	private:
		int id;
		float salary;
	public:
		Employee(int id = 0,float salary = 0.0){
			this->id = id;
			this->salary = salary;
		}
		void display(){
			cout << "ID:" << id << endl;
			cout << "Salary:" << salary << endl;
		}
		
};
int main(){
	Employee e1,e2,e3;
	e1.display();
	e2.display();
	e3.display();
	
	return 0;
}
