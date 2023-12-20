#include<iostream>
using namespace std;

class Example {
private:
    int privateMember;   // Private member
public:
    int publicMember;    // Public member
protected:
    int protectedMember; // Protected member
};

int main() {
    Example obj;
    // Uncommenting the following line will result in a compilation error
    //obj.privateMember;   // Error: private member not accessible outside the class
    obj.publicMember = 42;  // OK: public member is accessible
    // Uncommenting the following line will result in a compilation error
   //obj.protectedMember; // Error: protected member not accessible outside the class

    return 0;
}
