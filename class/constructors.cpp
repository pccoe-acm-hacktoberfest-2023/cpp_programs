#include<iostream>
using namespace std;

// Class ABC definition
class ABC {
    int data; // private member variable

public:
    // Default constructor
    ABC() {
        cout << "This is default constructor" << endl;
    }

    // Parameterized constructor with an integer parameter
    ABC(int a) {
        cout << "This is parameterized constructor";
        data = a;
        cout << " Value of data is: " << data;
    }
};

// Main function
int main() {
    ABC obj;   // Default constructor is invoked
    ABC obj1(5); // Parameterized constructor is invoked with value 5

    return 0;
}
