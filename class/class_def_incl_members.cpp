#include<iostream>
using namespace std;

// Class declaration
class ABC {
    private:
        int data; // private data member

    public:
        // Member function to get data from the user
        void getdata() {
            cout << "Enter number: ";
            cin >> data;
            cout << "The number entered is: " << data;
        }
};

// Main function
int main() {
    ABC obj; // Creating an object of the ABC class
    obj.getdata(); // Calling the getdata() member function of the object
    return 0; // Returning 0 to indicate successful execution
}
