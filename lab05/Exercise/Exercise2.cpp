#include <iostream>
using namespace std;
class BankAccount {
    private:
    static double interestRate;
    public:
   static void showinterestrate(){
        cout << "interest rate:" << interestRate << endl;
    }
};

double BankAccount::interestRate = 15.5;

int main() {
     BankAccount a1;
     BankAccount::showinterestrate();
     return 0;
}
