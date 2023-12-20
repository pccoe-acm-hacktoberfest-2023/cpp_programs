#include <iostream>

class Complex {
private:
    double real;
    double imag;
    static int objectCount; // Static member to count the number of objects

public:
    Complex(double r, double i) : real(r), imag(i) {
        // Increment the object count when a new object is created
        objectCount++;
    }

    // Static member function to get the object count
    static int getObjectCount() {
        return objectCount;
    }

    // Function to display the complex number
    void display() const {
        std::cout << "Real: " << real << ", Imaginary: " << imag << std::endl;
    }
};

// Initialize the static member variable
int Complex::objectCount = 0;

int main() {
    // Creating objects of the Complex class
    Complex c1(2.0, 3.0);
    Complex c2(1.5, 2.5);
    Complex c3(-1.0, 0.0);

    // Displaying the complex numbers
    std::cout << "Complex Numbers:" << std::endl;
    c1.display();
    c2.display();
    c3.display();

    // Display the count of objects using the static member function
    std::cout << "Number of objects: " << Complex::getObjectCount() << std::endl;

    return 0;
}
