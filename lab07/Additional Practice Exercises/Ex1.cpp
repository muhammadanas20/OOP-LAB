#include <iostream>
using  namespace std;

class Profile{
    private:
    string name;
    int age;
    string status;
    public:
    Profile(string name,int age,string status):name(name),age(age),status(status){}
    friend ostream& operator<<(ostream &out,const Profile& obj);
};
ostream& operator<<(ostream &out,const Profile& obj){
        out << "Profile details" << endl;
        out << "Name :" << obj.name << endl;
        out << "Age :" << obj.age << endl;
        out << "Status :" << obj.status << endl;
        return out;
}
int main(){
    Profile p("Anas",18,"student");
    cout << p ;
}