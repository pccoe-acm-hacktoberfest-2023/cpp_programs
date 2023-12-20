#include <iostream>
using namespace std;

// Class definition
class ABC
{
private:
    int data;

public:
    // Default constructor
    ABC()
    {
        data = 0; // Default initialization
        cout << "Default constructor invoked" << endl;
    }

    // Parameterized constructor
    ABC(int value)
    {
        data = value;
        cout << "Parameterized constructor invoked with value: " << data << endl;
    }

    // Copy constructor
    ABC(const ABC &obj)
    {
        data = obj.data;
        cout << "Copy constructor invoked. Copied value: " << data << endl;
    }
};

int main()
{
    // Creating objects of class ABC
    ABC obj1(50);  // Parameterized constructor invoked
    ABC obj2;      // Default constructor invoked
    ABC obj3(obj1); // Copy constructor invoked

     obj2 = obj1;    // Copy
}