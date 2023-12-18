#include <iostream>
using namespace std;
// Inline function definition
inline int add(int a, int b) {
    return a + b;
}

int main() {
   
    int num1;
    int num2 ;
    cout<<"Enter two numbers to add using inline function: ";
    cin>>num1>>num2;
    // Call to the inline function 'add'
    int result = add(num1, num2);

    // Print the result to the console
    cout << "Sum: " << result << endl;

    return 0;
}
