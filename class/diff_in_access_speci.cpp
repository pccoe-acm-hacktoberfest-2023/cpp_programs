#include <iostream>
using namespace std;

// Base class
class MyBaseClass {
private:
    int privateMember;
    
protected:
    int protectedMember;

public:
    int publicMember;

    // Constructor to initialize members
    MyBaseClass() : privateMember(10), protectedMember(20), publicMember(30) {}

    // Function to display member values
    void DisplayMembers() {
        cout << "Private Member: " << privateMember << endl;
        cout << "Protected Member: " << protectedMember << endl;
        cout << "Public Member: " << publicMember << endl;
    }
};

// Derived class
class MyDerivedClass : public MyBaseClass {
public:
    void AccessBaseMembers() {
        // Uncommenting the following line will result in a compilation error
        //cout << "Private Member in Derived Class: " << privateMember << endl;
        cout << "Protected Member in Derived Class: " << protectedMember << endl;
        cout << "Public Member in Derived Class: " << publicMember << endl;
    }
};

int main() {
    // Creating objects
    MyBaseClass baseObj;
    MyDerivedClass derivedObj;

    // Accessing members of the base class directly
    // Uncommenting the following line will result in a compilation error
   //cout << "Private Member in Main: " << baseObj.privateMember << endl;
    // Uncommenting the following line will result in a compilation error
    //cout << "Protected Member in Main: " << baseObj.protectedMember << endl;
    cout << "Public Member in Main: " << baseObj.publicMember << endl;

    cout << "\nDisplaying Members in Base Class:\n";
    baseObj.DisplayMembers();

    cout << "\nAccessing Base Members in Derived Class:\n";
    derivedObj.AccessBaseMembers();

    return 0;
}
