#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Open the file "xyz.txt" in truncation mode for writing
    ofstream obj("xyz.txt", ios::trunc);


    // Write some data to the file
    obj << "Hello, World!\nThis is a test.";

    // Close the file
    obj.close();

    // Reopen the file in read mode
    ifstream objRead("xyz.txt");

    // Create a text string to store each line of the file
    string myText;

    // Read and output each line of the file
    while (getline(objRead, myText))
    {
        cout << myText << endl;
    }

    // Close the file
    objRead.close();

    return 0;
}
