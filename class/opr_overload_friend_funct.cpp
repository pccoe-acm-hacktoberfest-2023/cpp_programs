#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double realPart, double imaginaryPart)
    {
        real = realPart;
        imaginary = imaginaryPart;
    }
    // Friend function declarations
    friend Complex operator+(const Complex& a, const Complex& b);
    friend Complex operator-(const Complex& a, const Complex& b);
    friend Complex operator*(const Complex& a, const Complex& b);
    friend Complex operator/(const Complex& a, const Complex& b);

    // Display function
    void display() const {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

// Overloaded addition operator
Complex operator+(const Complex& a, const Complex& b) {
    return Complex(a.real + b.real, a.imaginary + b.imaginary);
}

// Overloaded subtraction operator
Complex operator-(const Complex& a, const Complex& b) {
    return Complex(a.real - b.real, a.imaginary - b.imaginary);
}

// Overloaded multiplication operator
Complex operator*(const Complex& a, const Complex& b) {
    return Complex((a.real * b.real) - (a.imaginary * b.imaginary),
                   (a.real * b.imaginary) + (a.imaginary * b.real));
}

// Overloaded division operator
Complex operator/(const Complex& a, const Complex& b) {
    if (b.real == 0 && b.imaginary == 0) {
        cout << "Error: Division by zero." << endl;
        return Complex(0, 0);
    }

    double denominator = (b.real * b.real) + (b.imaginary * b.imaginary);
    double realPart = ((a.real * b.real) + (a.imaginary * b.imaginary)) / denominator;
    double imaginaryPart = ((a.imaginary * b.real) - (a.real * b.imaginary)) / denominator;

    return Complex(realPart, imaginaryPart);
}

int main() {
    // Create two complex numbers
    Complex c1(3.0, 4.0);
    Complex c2(1.0, -2.0);

    // Display the original complex numbers
    cout << "Complex Number 1: ";
    c1.display();
    cout << "Complex Number 2: ";
    c2.display();

    // Perform operations using overloaded operators
    Complex sum = c1 + c2;
    Complex difference = c1 - c2;
    Complex product = c1 * c2;
    Complex quotient = c1 / c2;

    // Display the results of the operations
    cout << "\nSum: ";
    sum.display();
    cout << "Difference: ";
    difference.display();
    cout << "Product: ";
    product.display();
    cout << "Quotient: ";
    quotient.display();

    return 0;
}
