#include <iostream>
using namespace std;
class Account{
	private:
	 int accNo;
	 float balance;
	public:
    Account(int accNo,float balance){
    	this->balance = balance;
    	this->accNo = accNo;
    	cout << "parametrized constructor\n" ;
	}
	Account(){
		accNo = 0;
		balance = 0.0;
		cout << "default constructor called\n";
		
	}
	Account(const Account& A){
		this->accNo = A.accNo;
		this->balance = A.balance;
		cout << "copy constructor called\n" ;
	}
	void display(){
		cout << "Acount NO:" << accNo << endl;
		cout << "balance:" << balance << endl;
	}	
};
int main(){
	Account a1;
	Account a2(101,1000);
	Account a3 = a2;
	a1.display();
	a2.display();
	a3.display();
	return 0;
}
