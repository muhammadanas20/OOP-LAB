#include <iostream>
using namespace std;
class person {
public:
    void show() {
        cout << "Person" << endl;
    }
};
class student : public person {};
class employee : public person {};
class teachingAssistant : public student, public employee {};
int main() {
    teachingAssistant obj;
    // obj.show(); // This will cause a compilation error due to ambiguity
    obj.student::show(); // This resolves the ambiguity by specifying which base class's show() to call
    return 0;
}