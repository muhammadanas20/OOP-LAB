#include <iostream>
using namespace std;
struct Book
{
    string title;
    string author;
    float price;
};
int main()
{
    Book b1;
    cout << "Enter a Book title :";
    getline(cin, b1.title);
    cout << "Enter a author name :";
    getline(cin, b1.author);
    cout << "Enter a price :";
    cin >> b1.price;
    cout << "\n=========Details==========\n";
    cout << "Title Name: " << b1.title << endl;
    cout << "Author Name: " << b1.author << endl;
    cout << "Price: " << b1.price << endl;
    return 0;
}