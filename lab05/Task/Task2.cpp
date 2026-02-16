#include <iostream>
using namespace std;
class SchoolAccount
{
private:
    static float tuitionFee;
    string name;
    char grade;
public:
  SchoolAccount(string name,char grade){
    this->grade = grade;
    this->name = name;
  }
  static void showFee(){
    cout << "FEE: " << tuitionFee << endl;
  }
};
float SchoolAccount::tuitionFee = 200000;
int main()
{
    SchoolAccount("Anas",'A');
    SchoolAccount("Abdullah",'A');
    SchoolAccount::showFee();
    return 0;
}