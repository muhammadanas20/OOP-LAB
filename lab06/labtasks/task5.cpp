
#include <iostream>
using namespace std;
class Account{
    private:
    string accountNumber;
    public:
    Account(string accNum):accountNumber(accNum){}
    void showAccount(){
        cout << "Account Number: " << accountNumber << endl;
    }
};
class SavingsAccount : public Account{
    private:
    double interestRate;
    public:
    SavingsAccount(string accNum, double rate):Account(accNum),interestRate(rate){}
    void calculateInterest(){
        cout << "Calculating interest at rate: " << interestRate << "%" << endl;
    }
};
class CurrentAccount : public Account{
    private:
    double overdraftLimit;
    public:
    CurrentAccount(string accNum, double limit):Account(accNum),overdraftLimit(limit){}
    void calculateOverdraft(){
        cout << "Calculating overdraft with limit: " << overdraftLimit << endl;
    }
};
int main(){
    SavingsAccount sa1("SA12345", 5.0);
    CurrentAccount ca1("CA54321", 1000.0);
    
    cout << "Savings Account Details:" << endl;
    sa1.showAccount();
    sa1.calculateInterest();
    
    cout << "\nCurrent Account Details:" << endl;
    ca1.showAccount();
    ca1.calculateOverdraft();
    
    return 0;
}
