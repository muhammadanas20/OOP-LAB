#include <iostream>
using namespace std;
class Product
{
private:
    int ID;
    string name;
    float price;

public:
    void input()
    {
        cout << "Enter ID:";
        cin >> ID;
        cout << "Enter name:";
        cin.ignore();
        getline(cin,name);
        cout << "Enter price:";
        cin >> price;
    }
    void display() const
    {
        cout << "NAME: " << name << endl;
        cout << "ID: " << ID << endl;
        cout << "PRICE: " << price << endl;
    }
};
int main()
{
    Product products[4];
    for (int i = 0; i < 4; i++)
    {
        products[i].input();
    }
    for (int i = 0; i < 4; i++)
    {
        products[i].display();
    }
}