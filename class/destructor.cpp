#include<iostream>
using namespace std;

// Class definition
class ABC
{
    int *width, *height; // Pointer variables for width and height

public:
    // Parameterized constructor
    ABC(int a, int b);

    // Destructor
    ~ABC();

    // Member function to calculate the area of the rectangle
    int area() {
        return (*width * *height); // Dereference width and height pointers to get values and calculate area
    }
};

// Constructor definition
ABC::ABC(int a, int b)
{
    width = new int;   // Dynamic memory allocation for width
    height = new int;  // Dynamic memory allocation for height
    *width = a;        // Assigning value a to the width
    *height = b;       // Assigning value b to the height
}

// Destructor definition
ABC::~ABC()
{
    delete width;  // Deallocate memory for width
    delete height; // Deallocate memory for height
}

// Main function
int main()
{
    // Creating objects of class ABC and initializing them with values
    ABC obj1(3, 4);  // Parameterized constructor is called
    ABC obj2(5, 6);  // Parameterized constructor is called

    // Displaying the area of rectangles
    cout << "Area of rectangle 1 is: " << obj1.area() << endl;
    cout << "Area of rectangle 2 is: " << obj2.area() << endl;

    // Destructor is automatically called when objects go out of scope, freeing the allocated memory

    return 0;
}
