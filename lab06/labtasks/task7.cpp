#include <iostream>
using namespace std;
class Base {
public:
    int publicVar;
protected:
    int protectedVar;
private:
    int privateVar;
public:
    Base(int pub, int prot, int priv) : publicVar(pub), protectedVar(prot), privateVar(priv) {}
    void showBaseDetails() {
        cout << "Base Class Details:" << endl;
        cout << "Public Variable: " << publicVar << endl;
        cout << "Protected Variable: " << protectedVar << endl;
        cout << "Private Variable: " << privateVar << endl;
    }
};
class PublicDerived : public Base {
public:
    PublicDerived(int pub, int prot, int priv) : Base(pub, prot, priv) {}
    void showPublicDerivedDetails() {
        cout << "Public Derived Class Details:" << endl;
        cout << "Public Variable: " << publicVar << endl; // Accessible
        cout << "Protected Variable: " << protectedVar << endl; // Accessible
        // cout << "Private Variable: " << privateVar << endl; // Not Accessible
    }
};
class ProtectedDerived : protected Base {
public:
    ProtectedDerived(int pub, int prot, int priv) : Base(pub, prot, priv) {}
    void showProtectedDerivedDetails() {
        cout << "Protected Derived Class Details:" << endl;
        cout << "Public Variable: " << publicVar << endl; // Accessible
        cout << "Protected Variable: " << protectedVar << endl; // Accessible
        // cout << "Private Variable: " << privateVar << endl; // Not Accessible
    }
};
class PrivateDerived : private Base {
public:
    PrivateDerived(int pub, int prot, int priv) : Base(pub, prot, priv) {}
    void showPrivateDerivedDetails() {
        cout << "Private Derived Class Details:" << endl;
        cout << "Public Variable: " << publicVar << endl; // Accessible
        cout << "Protected Variable: " << protectedVar << endl; // Accessible
        // cout << "Private Variable: " << privateVar << endl; // Not Accessible
    }
};
int main() {
    Base baseObj(1, 2, 3);
    PublicDerived pubDerivedObj(4, 5, 6);
    ProtectedDerived protDerivedObj(7, 8, 9);
    PrivateDerived privDerivedObj(10, 11, 12);
    
    cout << "Accessing Base Class from Main:" << endl;
    cout << "Public Variable: " << baseObj.publicVar << endl; // Accessible
    // cout << "Protected Variable: " << baseObj.protectedVar << endl; // Not Accessible
    // cout << "Private Variable: " << baseObj.privateVar << endl; // Not Accessible
    
    cout << "\nAccessing Public Derived Class from Main:" << endl;
    pubDerivedObj.showPublicDerivedDetails();
    
    cout << "\nAccessing Protected Derived Class from Main:" << endl;
    protDerivedObj.showProtectedDerivedDetails();
    
    cout << "\nAccessing Private Derived Class from Main:" << endl;
    privDerivedObj.showPrivateDerivedDetails();
    
    return 0;
}