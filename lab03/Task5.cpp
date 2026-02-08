#include <iostream>
#include "Book.h"
using namespace std;

int main() {
    Book b;

    b.setTitle("Object Oriented Programming");
    b.setAuthor("R.Harie");
    b.setPages(500);

    cout << "Title: " << b.getTitle() << endl;
    cout << "Author: " << b.getAuthor() << endl;
    cout << "Pages: " << b.getPages() << endl;

    return 0;
}
