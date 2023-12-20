#include <iostream>

class ClassB;  // Forward declaration

class ClassA {
private:
    int valueA;

public:
    ClassA(int valA) : valueA(valA) {}

    friend void swapValues(ClassA& objA, ClassB& objB);  // Friend function declaration

    void display() const {
        std::cout << "ClassA: " << valueA << std::endl;
    }
};

class ClassB {
private:
    int valueB;

public:
    ClassB(int valB) : valueB(valB) {}

    friend void swapValues(ClassA& objA, ClassB& objB);  // Friend function declaration

    void display() const {
        std::cout << "ClassB: " << valueB << std::endl;
    }
};

// Friend function definition
void swapValues(ClassA& objA, ClassB& objB) {
    int temp = objA.valueA;
    objA.valueA = objB.valueB;
    objB.valueB = temp;
}

int main() {
    ClassA objA(10);
    ClassB objB(20);

    std::cout << "Before swapping:" << std::endl;
    objA.display();
    objB.display();

    // Call the friend function to swap values
    swapValues(objA, objB);

    std::cout << "\nAfter swapping:" << std::endl;
    objA.display();
    objB.display();

    return 0;
}
