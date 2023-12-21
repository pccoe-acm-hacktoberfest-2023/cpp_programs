
#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double realPart, double imaginaryPart) : real(realPart), imaginary(imaginaryPart) {}

    // Member functions for overloaded operators
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    Complex operator*(const Complex& other) const {
        return Complex((real * other.real) - (imaginary * other.imaginary),
                       (real * other.imaginary) + (imaginary * other.real));
    }

    Complex operator/(const Complex& other) const {
        // Avoid division by zero
        if (other.real == 0 && other.imaginary == 0) {
            std::cerr << "Error: Division by zero." << std::endl;
            return Complex(0, 0);
        }

        double denominator = (other.real * other.real) + (other.imaginary * other.imaginary);
        double realPart = ((real * other.real) + (imaginary * other.imaginary)) / denominator;
        double imaginaryPart = ((imaginary * other.real) - (real * other.imaginary)) / denominator;

        return Complex(realPart, imaginaryPart);
    }

    // Display function
    void display() const {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    // Create two complex numbers
    Complex c1(3.0, 4.0);
    Complex c2(1.0, -2.0);

    // Display the original complex numbers
    std::cout << "Complex Number 1: ";
    c1.display();
    std::cout << "Complex Number 2: ";
    c2.display();

    // Perform operations using overloaded operators
    Complex sum = c1 + c2;
    Complex difference = c1 - c2;
    Complex product = c1 * c2;
    Complex quotient = c1 / c2;

    // Display the results of the operations
    std::cout << "\nSum: ";
    sum.display();
    std::cout << "Difference: ";
    difference.display();
    std::cout << "Product: ";
    product.display();
    std::cout << "Quotient: ";
    quotient.display();

    return 0;
}
