
#include <iostream>
using namespace std;
class Book {
    private:
    const int ISBN;
    public:
    Book(int ISBN):ISBN(ISBN){}
    void displayISBN() const{
         cout << "ISBN : " << ISBN << endl;
    }
};

int main() {
    Book b1(123);
    b1.displayISBN();
     return 0;
}
