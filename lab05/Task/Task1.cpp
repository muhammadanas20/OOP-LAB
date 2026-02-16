#include <iostream>
using namespace std;
class LibraryMember
{
private:
    string name;
    static int totalMembers;

public:
LibraryMember(string name){
    this->name = name;
    totalMembers++;
}
static int gettotal(){ return totalMembers ;}
};
int LibraryMember::totalMembers = 0;
int main()
{
    LibraryMember M1("Anas");
    LibraryMember M2("Abdullah");
    LibraryMember M3("Alyan");
    LibraryMember M4("Tahir");
    cout << "Total members added: " << LibraryMember::gettotal() << endl;
    return 0;
}
