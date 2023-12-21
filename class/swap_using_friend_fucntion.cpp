#include <iostream>
using namespace std;
class ClassB; // Forward declaration

class ClassA
{
private:
    int dataA;

public:
    ClassA(int valueA)
    {
        dataA = valueA;
    }

    friend void swapData(ClassA &objA, ClassB &objB);

    void display()
    {
        cout << "Class A: " << dataA << endl;
    }
};

class ClassB
{
private:
    int dataB;

public:
    ClassB(int valueB)
    {
        dataB = valueB;
    }

    friend void swapData(ClassA &objA, ClassB &objB);

    void display()
    {
        std::cout << "Class B: " << dataB << std::endl;
    }
};

// Friend function definition
void swapData(ClassA &objA, ClassB &objB)
{
    // Swap private data values
    int temp = objA.dataA;
    objA.dataA = objB.dataB;
    objB.dataB = temp;
}

int main()
{
    // Create objects of ClassA and ClassB
    ClassA objA(10);
    ClassB objB(20);

    // Display original values
    cout << "Before swapping:" << endl;
    objA.display();
    objB.display();

    // Swap data using friend function
    swapData(objA, objB);

    // Display swapped values
    cout << "\nAfter swapping:" << endl;
    objA.display();
    objB.display();

    return 0;
}
