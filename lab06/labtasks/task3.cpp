#include <iostream>
using namespace std;
class Writer{
    public:
    void write(){
        cout << "Writer is writing..." << endl;
    }
};
class Speaker{
    public:
    void speak(){
        cout << "Speaker is speaking..." << endl;
    }
};
class Author: public Writer, public Speaker{
    public:
    void showDetails(){
        cout << "Author Details:" << endl;
        write();
        speak();
    }
};
int main(){
    Author a1;
    a1.showDetails();
    return 0;
}