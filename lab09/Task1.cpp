// Task 1: Online Banking Transaction System
// Description
// Design a banking system where different transaction types are processed differently using abstraction.

#include<iostream>
using namespace std;

class Transaction {
public:
    string accountNumber;
    double amount;
    
    Transaction(string a, double val) {
        accountNumber = a;
        amount = val;
    }
    virtual void processTransaction() = 0;
    virtual ~Transaction() {}
};

class Deposit: public Transaction {
public:
    double valueToBeDeposited;
    Deposit(string a, double val, double init=0) : Transaction(a, init) { 
        valueToBeDeposited = val;
    }
    void processTransaction() {
        cout << "Deposit Transaction" << endl; 
        cout << "Account: " << accountNumber << endl;
        cout << "Previous Amount: " << amount << endl;
        amount += valueToBeDeposited;
        cout << "Current Amount: " << amount << endl;
        cout << "Status: Amount Deposited Successfully" << endl;
    }
};

class Withdrawal: public Transaction {
public:
    double amountToBeWithdrawn;

    Withdrawal(string a, double val, double amount) : Transaction(a, amount) {
        amountToBeWithdrawn = val;
    }

    void processTransaction() {
        cout << "Withdrawal Transaction" << endl; 
        cout << "Account: " << accountNumber << endl;
        cout << "Previous Amount: " << amount << endl;
        if (amount-amountToBeWithdrawn>=0) {
            amount-=amountToBeWithdrawn;
            cout << "Current Amount: " << amount << endl;
        }
        else {
            amount=0;
            cout << "Amount = 0 (negative amount cannot exist)" << endl;
        }
        cout << "Status: Withdrawn successfully" << endl;
    }
};

class Transfer: public Transaction {
public:
    double amountToBeTransferred;
    string accountToBeTransferredTo;

    Transfer(string a, double val, double amount, string c) : Transaction(a, val) {
        amountToBeTransferred=amount;
        accountToBeTransferredTo = c;
    }

    void processTransaction() {
        cout << "Transfer Transaction" << endl; 
        cout << "Account to be Transferred to: " << accountToBeTransferredTo << endl;
        cout << "Your Account Number: " << accountNumber << endl;
        double output = (amount >= amountToBeTransferred) ? amountToBeTransferred : amount;
        cout << "Previous amount(in your account): " << amount << " | ";
        if (amount-amountToBeTransferred>=0) {
            amount-=amountToBeTransferred;
            cout << "Current Amount(in your account): " << amount << endl;
        }
        else {
            amount=0;
            cout << "Amount = 0 (negative amount cannot exist)" << endl;
        }
        cout << "Total Amount Transferred:  " << output <<endl;
        cout << "Status: Amount Transferred Successfully" << endl;
    }
};

int main () {
    Transaction* t;

    // Deposit: Initial 5000, depositing 5000 more
    Deposit d1("12345", 5000, 5000);
    t = &d1;
    t->processTransaction();
    
    cout << endl << endl;
    
    // Withdrawal: Current 10000, withdrawing 2000
    Withdrawal w1("12345", 2000, 10000);
    t = &w1;
    t->processTransaction();
    
    cout << endl << endl;
    
    // Transfer: From account 12345 with 8000, transferring 1500 to 54321
    Transfer tr1("12345", 8000, 1500, "54321");
    t = &tr1;
    t->processTransaction();
    
    return 0;
}