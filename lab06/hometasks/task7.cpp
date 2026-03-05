
#include <iostream>
using namespace std;
class BankAccount
{
private:
    int accountNumber;
    double balance;
public:
    BankAccount(int accNum, double bal) : accountNumber(accNum), balance(bal) {}
    void displayAccountInfo() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};
class SavingsAccount : private BankAccount
{public:
    SavingsAccount(int accNum, double bal) : BankAccount(accNum, bal) {}
    void showSavingsInfo() const {
        displayAccountInfo(); // Accessing base class function
    }
};
int main() {
    SavingsAccount mySavings(12345, 1000.0);
    // mySavings.displayAccountInfo(); // This will cause a compilation error
    mySavings.showSavingsInfo(); // This works because it's a member function of SavingsAccount
    return 0;
}