#include<iostream>
#include<stdlib.h> // Include necessary header for using exit() function
using namespace std;

int main() {
    int *p; // Declare a pointer to an integer
    p = new int(50); // Dynamically allocate memory for an integer and assign 50 to it

    if (!p) {
        // Check if memory allocation was successful
        cout << "Allocation error\n";
        exit(1); // If allocation failed, print an error message and exit the program with status 1
    }

    cout << "At " << p << " "; // Print the memory address pointed to by 'p'
    cout << "the value is " << *p << "\n"; // Print the value stored at the memory location pointed to by 'p'

    delete p; // Deallocate the dynamically allocated memory to prevent memory leaks

    return 0;
}
