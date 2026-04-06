
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
			   	cout << "Invalid input\n";
			   }
			  	
			}
			 cout << "Max subject reachead\n";
			 return;
			  
		}
		
};
float avg(Student s){
	int i=0;
	int sum = 0;
	for(i=0;i<3;i++){
		sum += s.marks[i];
	}
	return sum/3;
}
int main(){
	Student s;
	s.setMarks();
	cout << "Avg of student :" << avg(s) << endl;
}
