#include <iostream>
using namespace std;

class BankAccount {
private:
    int AccountNumber;
    int balance;

public:
    void setAccountnumber(int accNo){
        AccountNumber = accNo;
    }
    void setBalance(int b) {
        balance = b;
    }
    void showAccountnumber(){
        cout << "Account No:" << AccountNumber << endl;
    }
    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};
// Private members improve security by preventing direct access to a class
// internal data, ensuring it can only be modified in controlled, safe ways.

int main() {
    BankAccount acc;
    acc.setBalance(10000);
    acc.setAccountnumber(101);
    acc.showAccountnumber();
    acc.showBalance();
    return 0;
}