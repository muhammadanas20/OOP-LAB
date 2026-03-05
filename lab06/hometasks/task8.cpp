#include <iostream>
using namespace std;
class Machine {
public:
    void show() {
        cout << "Machine" << endl;
    }
};
class Printer : public Machine {};
class Scanner : public Machine {};
class AllInOne : public Printer, public Scanner {};
int main() {
    AllInOne obj;
    // obj.show(); // This will cause a compilation error due to ambiguity
    obj.Printer::show(); // This resolves the ambiguity by specifying which base class's show() to call
    return 0;
}