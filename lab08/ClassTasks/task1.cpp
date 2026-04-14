// 2.5 Class Tasks
// Create a class Student with private marks.
// Write a friend function to calculate average.
// Modify program to accept input from user.
// Add validation (marks should be between 0–100).
#include <iostream>
using namespace std;
class Student{
	private:
		int marks[3];
	public:
		friend float avg(Student s);
		void setMarks(){
			int i=0;
			while(i<3){
				int temp;
				cout << "Enter a marks for subject " << i+1 << " :";
				cin >> temp;
				if(temp >= 0 && temp <= 100){
					marks[i++] = temp;
				}else{
					cout << "Invalid input (0-100 only)\n";
				}
			}
			cout << "All subjects entered successfully\n";
		}
		
};
float avg(Student s){
	int i=0;
	float sum = 0;
	for(i=0;i<3;i++){
		sum += s.marks[i];
	}
	return sum/3.0f;
}
int main(){
	Student s;
	s.setMarks();
	cout << "Average of student: " << avg(s) << endl;
}
